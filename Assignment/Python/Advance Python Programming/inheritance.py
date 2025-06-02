# Single Inheritance
class Animal:
    def speak(self):
        print("Animal speaks")

class Dog(Animal):
    def bark(self):
        print("Dog barks")

# Multiple Inheritance
class Father:
    def skills(self):
        print("Father: Gardening, Programming")

class Mother:
    def skills(self):
        print("Mother: Cooking, Art")

class Child(Father, Mother):
    def skills(self):
        Father.skills(self)
        Mother.skills(self)
        print("Child: Sports")

# Multilevel Inheritance
class Grandparent:
    def show(self):
        print("Grandparent")

class Parent(Grandparent):
    def show(self):
        print("Parent")

class Grandchild(Parent):
    def show(self):
        print("Grandchild")

# Hierarchical Inheritance
class Vehicle:
    def start(self):
        print("Vehicle started")

class Car(Vehicle):
    def drive(self):
        print("Car is driving")

class Bike(Vehicle):
    def ride(self):
        print("Bike is riding")

# Hybrid Inheritance (combination)
class A:
    def showA(self):
        print("Class A")

class B(A):
    def showB(self):
        print("Class B")

class C(A):
    def showC(self):
        print("Class C")

class D(B, C):
    def showD(self):
        print("Class D")

# Demonstration
print("Single Inheritance:")
d = Dog()
d.speak()
d.bark()

print("\nMultiple Inheritance:")
c = Child()
c.skills()

print("\nMultilevel Inheritance:")
g = Grandchild()
g.show()

print("\nHierarchical Inheritance:")
car = Car()
car.start()
car.drive()
bike = Bike()
bike.start()
bike.ride()

print("\nHybrid Inheritance:")
d_hybrid = D()
d_hybrid.showA()
d_hybrid.showB()
d_hybrid.showC()
d_hybrid.showD()