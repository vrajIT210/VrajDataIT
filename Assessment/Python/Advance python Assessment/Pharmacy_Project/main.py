from admin_module import Admin
from manager_module import Manager
from medicine_module import Medicine

def manager_menu(manager_id):
    while True:
        print("\n--- Pharmacy Manager Menu ---")
        print("1. Add Medicine")
        print("2. View Medicines")
        print("3. Delete Medicine")
        print("4. Logout")
        choice = input("Enter choice: ")
        if choice == '1':
            name = input("Medicine Name: ")
            qty = input("Quantity (e.g. 10X10): ")
            price = input("Price: ")
            med = Medicine(name, qty, manager_id, float(price))
            med.add_medicine()
        elif choice == '2':
            Medicine.view_medicines()
        elif choice == '3':
            Medicine.delete_medicine()
        elif choice == '4':
            break
        else:
            print("Invalid input. Try again.")

def admin_menu():
    while True:
        print("\n--- Admin Menu ---")
        print("1. View Managers")
        print("2. View Medicines")
        print("3. Logout")
        choice = input("Enter choice: ")
        if choice == '1':
            Admin.view_managers()
        elif choice == '2':
            Admin.view_medicines()
        elif choice == '3':
            break
        else:
            print("Invalid input. Try again.")

def main_menu():
    while True:
        print("\n==== Pharmacy Management System ====")
        print("1. Admin Register")
        print("2. Admin Login")
        print("3. Manager Register")
        print("4. Manager Login")
        print("5. Exit")
        choice = input("Enter choice: ")
        if choice == '1':
            Admin.register()
        elif choice == '2':
            if Admin.login():
                admin_menu()
        elif choice == '3':
            Manager.register()
        elif choice == '4':
            manager_id = Manager.login()
            if manager_id:
                manager_menu(manager_id)
        elif choice == '5':
            print("🔚 Exiting the system.")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main_menu()
