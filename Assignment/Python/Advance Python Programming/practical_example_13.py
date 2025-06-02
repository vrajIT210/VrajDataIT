class Animal:
    def speak(self):
        print("Animal speaks")

class Dog(Animal):
    def bark(self):
        print("Dog barks")

# Create an object of Dog
d = Dog()
d.speak()  # Inherited from Animal
d.bark()   # Defined in Dog