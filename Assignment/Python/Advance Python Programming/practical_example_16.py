# Hierarchical Inheritance Example

class Animal:
    def speak(self):
        print("Animal speaks")

class Dog(Animal):
    def bark(self):
        print("Dog barks")

class Cat(Animal):
    def meow(self):
        print("Cat meows")

# Create objects
dog = Dog()
cat = Cat()

# Demonstrate hierarchical inheritance
dog.speak()
dog.bark()

cat.speak()
cat.meow()