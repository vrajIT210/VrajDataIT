lambda_function = lambda x, y: (x + y, x * y)


num1 = 5
num2 = 3
result = lambda_function(num1, num2)

print(f"Sum: {result[0]}, Product: {result[1]}")