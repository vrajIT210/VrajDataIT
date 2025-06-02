# Multilevel Inheritance Example

class Animal:
    def speak(self):
        print("Animal speaks")

class Dog(Animal):
    def bark(self):
        print("Dog barks")

class Puppy(Dog):
    def weep(self):
        print("Puppy weeps")

# Create an object of Puppy
puppy = Puppy()
puppy.speak()  # Inherited from Animal
puppy.bark()   # Inherited from Dog
puppy.weep()   # Defined in Puppy