class Animal:
    def __init__(self, name):
        self.name = name

    def speak(self):
        print(f"{self.name} makes a sound.")

class Dog(Animal):
    def __init__(self, name, breed):
        super().__init__(name)  # Call the parent class constructor
        self.breed = breed

    def speak(self):
        super().speak()  # Call the parent class method
        print(f"{self.name} barks.")

# Example usage
dog = Dog("Buddy", "Golden Retriever")
dog.speak()