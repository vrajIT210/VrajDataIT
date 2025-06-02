# Sorting a list using sort() and sorted()

# Original list
numbers = [5, 2, 9, 1, 5, 6]

# Using sort() - modifies the original list
numbers.sort()
print("Sorted list using sort():", numbers)

# Resetting the list to original
numbers = [5, 2, 9, 1, 5, 6]

# Using sorted() - returns a new sorted list
sorted_numbers = sorted(numbers)
print("Sorted list using sorted():", sorted_numbers)

# Original list remains unchanged
print("Original list after using sorted():", numbers)