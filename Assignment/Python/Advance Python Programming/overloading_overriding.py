# Method Overloading Example (using default arguments)
class Calculator:
    def add(self, a, b=0, c=0):
        return a + b + c

calc = Calculator()
print("Add two numbers:", calc.add(5, 10))        
print("Add three numbers:", calc.add(5, 10, 15))  

# Method Overriding Example
class Animal:
    def speak(self):
        print("Animal speaks")

class Dog(Animal):
    def speak(self):
        print("Dog barks")

animal = Animal()
animal.speak()  

dog = Dog()
dog.speak()   