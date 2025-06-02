import math

def math_module_demo():
    # Calculate the square root of a number
    num = 16
    print(f"Square root of {num}: {math.sqrt(num)}")

    # Calculate the factorial of a number
    num = 5
    print(f"Factorial of {num}: {math.factorial(num)}")

    # Calculate the greatest common divisor (GCD) of two numbers
    num1, num2 = 48, 18
    print(f"GCD of {num1} and {num2}: {math.gcd(num1, num2)}")

    # Calculate the value of pi
    print(f"Value of pi: {math.pi}")

    # Calculate the sine of an angle in radians
    angle = math.radians(30)  # Convert degrees to radians
    print(f"Sine of 30 degrees: {math.sin(angle)}")

    # Calculate the logarithm (base 10) of a number
    num = 100
    print(f"Logarithm base 10 of {num}: {math.log10(num)}")

math_module_demo()