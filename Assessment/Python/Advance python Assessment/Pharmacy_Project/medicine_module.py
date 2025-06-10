from db_connection import get_connection
from datetime import date

class Medicine:
    def __init__(self, name, qty, added_by, price):
        self.name = name
        self.__qty = qty
        self.added_date = date.today()
        self.added_by = added_by
        self.price = price

    def add_medicine(self):
        try:
            conn = get_connection()
            cursor = conn.cursor()
            cursor.execute(
                "INSERT INTO medicines (name, _qty, added_date, added_by, price) VALUES (%s, %s, %s, %s, %s)",
                (self.name, self.__qty, self.added_date, self.added_by, self.price)
            )
            conn.commit()
            conn.close()
            print("Medicine added successfully.")
        except Exception as e:
            print("Error:", e)

    @staticmethod
    def view_medicines():
        try:
            conn = get_connection()
            cursor = conn.cursor()
            cursor.execute("SELECT * FROM medicines")
            results = cursor.fetchall()
            print("\n--- Medicine List ---")
            for row in results:
                print(row)
            conn.close()
        except Exception as e:
            print("Error:", e)

    @staticmethod
    def delete_medicine():
        try:
            id = input("Enter Medicine ID to delete: ")
            confirm = input("Confirm deletion (Y/N)? ").lower()
            if confirm == 'y':
                conn = get_connection()
                cursor = conn.cursor()
                cursor.execute("DELETE FROM medicines WHERE id=%s", (id,))
                conn.commit()
                conn.close()
                print("Medicine deleted.")
            else:
                print("Deletion cancelled.")
        except Exception as e:
            print("Error:", e)
