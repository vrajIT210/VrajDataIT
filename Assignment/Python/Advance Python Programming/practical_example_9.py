try:
    file = open('sample.txt', 'r')
    content = file.read()
    print("File content:")
    print(content)
except FileNotFoundError:
    print("Error: The file does not exist.")
except IOError:
    print("Error: An IO error occurred while reading the file.")
finally:
    try:
        file.close()
        print("File closed successfully.")
    except NameError:
        print("File was never opened, so nothing to close.")