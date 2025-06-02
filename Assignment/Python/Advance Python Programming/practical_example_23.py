import re

# Input string and word to search
text = input("Enter a string: ")
word = input("Enter the word to search: ")

# Search for the word in the string
match = re.search(rf'\b{re.escape(word)}\b', text)

if match:
    print(f"'{word}' found in the string.")
else:
    print(f"'{word}' not found in the string.")