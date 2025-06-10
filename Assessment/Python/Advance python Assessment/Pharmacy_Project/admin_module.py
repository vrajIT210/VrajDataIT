from db_connection import get_connection
from medicine_module import Medicine

class Admin:
    @staticmethod
    def register():
        name = input("Enter admin name: ")
        password = input("Enter password: ")
        try:
            conn = get_connection()
            cursor = conn.cursor()
            cursor.execute("INSERT INTO admin (name, password) VALUES (%s, %s)", (name, password))
            conn.commit()
            conn.close()
            print("Admin registered.")
        except Exception as e:
            print("Error:", e)

    @staticmethod
    def login():
        name = input("Enter admin name: ")
        password = input("Enter password: ")
        try:
            conn = get_connection()
            cursor = conn.cursor()
            cursor.execute("SELECT * FROM admin WHERE name=%s AND password=%s", (name, password))
            result = cursor.fetchone()
            conn.close()
            if result:
                print("Login successful.")
                return True
            else:
                print("Login failed.")
                return False
        except Exception as e:
            print("Error:", e)
            return False

    @staticmethod
    def view_managers():
        try:
            conn = get_connection()
            cursor = conn.cursor()
            cursor.execute("SELECT * FROM managers")
            print("\n--- Manager List ---")
            for row in cursor.fetchall():
                print(row)
            conn.close()
        except Exception as e:
            print("Error:", e)

    @staticmethod
    def view_medicines():
        Medicine.view_medicines()
