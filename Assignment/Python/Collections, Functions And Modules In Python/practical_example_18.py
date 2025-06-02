from collections import Counter

def count_characters(input_string):
    # Using Counter from collections to count characters
    character_count = Counter(input_string)
    return character_count

# Example usage
if __name__ == "__main__":
    user_input = input("Enter a string: ")
    result = count_characters(user_input)
    print("Character counts:")
    for char, count in result.items():
        print(f"'{char}': {count}")chaman