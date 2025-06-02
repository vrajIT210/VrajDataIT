# Program to create a tuple with multiple data types


mixed_tuple = (42, "Hello, World!", 3.14, True, [1, 2, 3], {'1': 'mohit'}, (7, 8, 9))


print("Tuple with multiple data types:", mixed_tuple)


for element in mixed_tuple:
    print(f"Element: {element}, Type: {type(element)}")