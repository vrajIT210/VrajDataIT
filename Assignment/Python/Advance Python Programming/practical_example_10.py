class CustomError(Exception):
    def __init__(self, message):
        super().__init__(message)
        self.message = message

try:
    raise CustomError("This is a custom exception message.")
except CustomError as ce:
    print(f"Caught a custom exception: {ce}")