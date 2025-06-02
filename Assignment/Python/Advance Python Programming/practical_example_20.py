class Animal:
    def speak(self):
        print("Animal speaks")

class Dog(Animal):
    def speak(self):
        print("Dog barks")

# Create instances
animal = Animal()
dog = Dog()

# Call speak method
animal.speak()  
dog.speak()   