class Animal:
    def speak(self):
        print("Animal speaks")

class Mammal(Animal):
    def feed_milk(self):
        print("Mammal feeds milk")

class Bird(Animal):
    def lay_eggs(self):
        print("Bird lays eggs")

class Bat(Mammal, Bird):  # Hybrid inheritance: Bat inherits from both Mammal and Bird
    def fly(self):
        print("Bat can fly")

# Demonstration
bat = Bat()
bat.speak()      # From Animal
bat.feed_milk()  # From Mammal
bat.lay_eggs()   # From Bird
bat.fly()        # From Bat