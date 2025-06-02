# Program to demonstrate the use of pop() and remove() to delete elements from a list

# Initial list
my_list = [10, 20, 30, 40, 50, 60]

# Using pop() to remove an element by index
# Removes the element at index 2 (30 in this case)
print(my_list)
popped_element = my_list.pop(2)
print(f"Popped element: {popped_element}")
print(f"List after pop(2): {my_list}")

# Using remove() to remove an element by value
# Removes the first occurrence of 50
my_list.remove(50)
print(f"List after remove(50): {my_list}")