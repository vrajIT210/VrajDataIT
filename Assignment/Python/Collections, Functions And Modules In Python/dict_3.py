# Program to update a value in a dictionary

# Sample dictionary
my_dict = {'name': 'Mohit', 'age': 22, 'city': 'Ahmedabad'}

# Update the value for a specific key
key_to_update = 'age'
new_value = 30

if key_to_update in my_dict:
    my_dict[key_to_update] = new_value
    print(f"Updated dictionary: {my_dict}")
else:
    print(f"Key '{key_to_update}' not found in the dictionary.")