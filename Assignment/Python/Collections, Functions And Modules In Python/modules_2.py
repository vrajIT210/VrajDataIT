import random

# Generate a random integer between 1 and 100
random_integer = random.randint(1, 100)
print(f"Random Integer: {random_integer}")

# Generate a random floating-point number between 0 and 1
random_float = random.random()
print(f"Random Float: {random_float}")

# Generate a random floating-point number between a specified range
random_uniform = random.uniform(10.5, 20.5)
print(f"Random Float in Range (10.5, 20.5): {random_uniform}")

# Choose a random element from a list
sample_list = [10, 20, 30, 40, 50]
random_choice = random.choice(sample_list)
print(f"Random Choice from List: {random_choice}")

# Shuffle a list randomly
random.shuffle(sample_list)
print(f"Shuffled List: {sample_list}")

# Generate a random sample of 3 elements from a list
random_sample = random.sample(sample_list, 3)
print(f"Random Sample of 3 Elements: {random_sample}")