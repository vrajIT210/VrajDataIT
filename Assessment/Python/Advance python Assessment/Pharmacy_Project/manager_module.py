from db_connection import get_connection

class Manager:
    @staticmethod
    def register():
        name = input("Enter manager name: ")
        pharmacy = input("Enter pharmacy name: ")
        try:
            conn = get_connection()
            cursor = conn.cursor()
            cursor.execute("INSERT INTO managers (name, pharmacy_name) VALUES (%s, %s)", (name, pharmacy))
            conn.commit()
            conn.close()
            print("Manager registered.")
        except Exception as e:
            print("Error:", e)

    @staticmethod
    def login():
        name = input("Enter manager name to login: ")
        try:
            conn = get_connection()
            cursor = conn.cursor()
            cursor.execute("SELECT id FROM managers WHERE name=%s", (name,))
            result = cursor.fetchone()
            conn.close()
            if result:
                print("Login successful.")
                return result[0]
            else:
                print("Login failed.")
                return None
        except Exception as e:
            print("Error:", e)
            return None
