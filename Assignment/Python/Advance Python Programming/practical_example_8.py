try:
    filename = input("sample3.txt")
    with open(filename, 'r') as file:
        data = file.read()
        print("File content read successfully.")

    num1 = int(input("Enter numerator: "))
    num2 = int(input("Enter denominator: "))
    result = num1 / num2
    print(f"Result: {result}")

except FileNotFoundError:
    print("Error: The specified file was not found.")
except ZeroDivisionError:
    print("Error: Division by zero is not allowed.")
except ValueError:
    print("Error: Invalid input. Please enter numeric values.")
except Exception as e:
    print(f"An unexpected error occurred: {e}")