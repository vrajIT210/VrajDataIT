# Program to demonstrate adding elements to a list using insert() and append()

# Initialize an empty list
my_list = []

# Adding elements using append()
my_list.append(10)
my_list.append(20)
my_list.append(30)

print("List after using append():", my_list)

# Adding elements using insert()
my_list.insert(1, 15)  # Insert 15 at index 1
my_list.insert(3, 25)  # Insert 25 at index 3

print("List after using insert():", my_list)