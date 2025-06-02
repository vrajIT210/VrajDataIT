import sqlite3

# Connect to SQLite database (or create it)
conn = sqlite3.connect('example.db')
cursor = conn.cursor()

# Create table
cursor.execute('''
    CREATE TABLE IF NOT EXISTS users (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        name TEXT NOT NULL,
        age INTEGER NOT NULL
    )
''')

# Insert data
users = [
    ('Alice', 25),
    ('Bob', 30),
    ('Charlie', 22)
]
cursor.executemany('INSERT INTO users (name, age) VALUES (?, ?)', users)
conn.commit()

# Fetch data
cursor.execute('SELECT * FROM users')
rows = cursor.fetchall()
for row in rows:
    print(row)

# Close connection
conn.close()