# Program to demonstrate the use of pop() and remove() to delete elements from a list

# Initial list
my_list = [10, 20, 30, 40, 50, 60]


popped_element = my_list.pop(2)
print(f"List after pop(2): {my_list}")
print(f"Popped element: {popped_element}")

my_list.remove(40)
print(f"List after remove(40): {my_list}")