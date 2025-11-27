def apply_operation(func, x, y):
    return func(x, y)

def multiply(a, b):
    return a * b

def power(base, exp):
    return base ** exp

result1 = apply_operation(multiply, 4, 5)
result2 = apply_operation(power, 2, 8)

print("Multiply result:", result1)
print("Power result:", result2)

# Returning a function
def create_multiplier(factor):
    return lambda x: x * factor

double = create_multiplier(2)
triple = create_multiplier(3)

print(double(10))
print(triple(10))