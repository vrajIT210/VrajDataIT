# Example of Multiple Inheritance in Python

class Father:
    def skills(self):
        print("Father: Gardening, Programming")

class Mother:
    def skills(self):
        print("Mother: Cooking, Art")

class Child(Father, Mother):
    def skills(self):
        print("Child: Sports, ", end="")
        Father.skills(self)
        Mother.skills(self)


c = Child()
c.skills()