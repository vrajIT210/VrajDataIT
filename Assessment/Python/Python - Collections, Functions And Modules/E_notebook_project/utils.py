def get_valid_option(prompt, valid_options):
    while True:
        choice = input(prompt).strip()
        if choice in valid_options:
            return choice
        print("Invalid input. Please try again.")
