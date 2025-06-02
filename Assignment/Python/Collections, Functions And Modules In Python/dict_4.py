# Program to merge two lists into a dictionary using a loop

# Sample lists
keys = ['a', 'b', 'c', 'd']
values = [1, 2, 3, 4]

# Initialize an empty dictionary
merged_dict = {}

# Merge lists into dictionary using a loop
for i in range(len(keys)):
    merged_dict[keys[i]] = values[i]

# Print the resulting dictionary
print("Merged Dictionary:", merged_dict)