from note_operations import create_note, view_notes
from utils import get_valid_option
from logger import log_transaction

def display_menu():
    print("\n--- E-Note Book Menu ---")
    print("1. Generate a Note")
    print("2. View All Notes")
    print("3. Exit")

def main():
    while True:
        display_menu()
        choice = get_valid_option("Enter your choice (1-3): ", ['1', '2', '3'])

        if choice == '1':
            create_note()
        elif choice == '2':
            view_notes()
        elif choice == '3':
            print("Thank you for using E-Note Book. Goodbye!")
            break

if __name__ == "__main__":
    main()
