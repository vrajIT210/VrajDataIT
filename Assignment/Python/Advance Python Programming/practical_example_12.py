class VariableDemo:
    global_var = "I am a global (class) variable"

    def __init__(self):
        self.instance_var = "I am an instance variable"

    def show_variables(self):
        local_var = "I am a local variable"
        print("Accessing global variable:", VariableDemo.global_var)
        print("Accessing instance variable:", self.instance_var)
        print("Accessing local variable:", local_var)

# Create an object of the class
demo = VariableDemo()
demo.show_variables()

# Accessing global variable outside the class
print("Accessing global variable outside class:", VariableDemo.global_var)