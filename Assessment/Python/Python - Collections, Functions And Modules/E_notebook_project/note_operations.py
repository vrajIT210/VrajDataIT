import os
from datetime import datetime
from logger import log_transaction

NOTES_DIR = "notes"
os.makedirs(NOTES_DIR, exist_ok=True)

def create_note():
    title = input("Enter note title: ").strip()
    content = input("Enter note content: ").strip()
    timestamp = datetime.now().strftime("%Y%m%d_%H%M%S")
    filename = f"{NOTES_DIR}/{title.replace(' ', '_')}_{timestamp}.txt"

    try:
        with open(filename, 'w') as f:
            f.write(f"Title: {title}\n")
            f.write(f"Content:\n{content}\n")
        print("Note saved successfully!")
        log_transaction(f"Note '{title}' created.")
    except Exception as e:
        print("Failed to save note:", e)

def view_notes():
    files = os.listdir(NOTES_DIR)
    if not files:
        print("No notes found.")
        return

    for file in files:
        print(f"\n--- {file} ---")
        with open(f"{NOTES_DIR}/{file}", 'r') as f:
            print(f.read())
    log_transaction("Viewed all notes.")
