import re

def match_word(pattern, string):
    match = re.match(pattern, string)
    if match:
        return f"Match found: {match.group()}"
    else:
        return "No match found."

# Example usage
pattern = r'\w+'  # Matches a word at the beginning of the string
string = "Hello world!"
result = match_word(pattern, string)
print(result)