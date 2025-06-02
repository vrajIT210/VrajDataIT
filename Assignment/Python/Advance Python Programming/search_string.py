import re

def search_word_in_string(word, string):
    pattern = r'\b' + re.escape(word) + r'\b'
    match = re.search(pattern, string)
    if match:
        print(f"'{word}' found in the string.")
    else:
        print(f"'{word}' not found in the string.")


text = "Python is a powerful programming language."
word_to_search = "powerful"
search_word_in_string(word_to_search, text)