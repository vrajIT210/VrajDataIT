import sqlite3


conn = sqlite3.connect('example.db')
cursor = conn.cursor()

# Create a table
cursor.execute('''
    CREATE TABLE IF NOT EXISTS users (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        name TEXT NOT NULL,
        age INTEGER
    )
''')

# Insert data
cursor.execute("INSERT INTO users (name, age) VALUES (?, ?)", ('mohit', 22))
cursor.execute("INSERT INTO users (name, age) VALUES (?, ?)", ('vraj', 25))
conn.commit()

# Fetch data
cursor.execute("SELECT * FROM users")
rows = cursor.fetchall()
for row in rows:
    print(row)

# Close the connection
conn.close()