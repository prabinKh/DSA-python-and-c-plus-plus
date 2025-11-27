# The print() function is used for output in Python
print("--- Variable Declaration and Initialization ---")

# Python is dynamically typed, so no type declarations are needed
# Integer variable
integer_a = 10
integer_b = 3
print(f"Integer a: {integer_a}, Integer b: {integer_b}")

# Floating-point variables (double is the default)
double_c = 15.5
float_d = 2.5
print(f"Double c: {double_c}, Float d: {float_d}")

# Character variables are just strings of length 1
char_e = 'A'
print(f"Character e: {char_e}")

# Boolean variable
bool_f = True
bool_g = False
print(f"Boolean f: {bool_f}, Boolean g: {bool_g}")

# String variable
string_h = "Hello, Python!"
print(f"String h: {string_h}")

# --- Arithmetic Operators ---
print("\n--- Arithmetic Operators ---")
sum_result = integer_a + integer_b
print(f"Addition (10 + 3): {sum_result}")

difference = integer_a - integer_b
print(f"Subtraction (10 - 3): {difference}")

product = integer_a * integer_b
print(f"Multiplication (10 * 3): {product}")

# Standard division returns a float
division = integer_a / integer_b
print(f"Division (10 / 3): {division}")

# Floor division truncates the decimal part for an integer result
floor_division = integer_a // integer_b
print(f"Floor Division (10 // 3): {floor_division}")

remainder = integer_a % integer_b
print(f"Modulus (10 % 3): {remainder}")

# Exponentiation (power) operator
exponent = integer_a ** integer_b
print(f"Exponentiation (10 ** 3): {exponent}")

# --- Assignment Operators ---
print("\n--- Assignment Operators ---")
assign_var = 10
assign_var += 5  # assign_var = assign_var + 5
print(f"Add and assign (10 += 5): {assign_var}")

assign_var *= 2  # assign_var = assign_var * 2
print(f"Multiply and assign (15 *= 2): {assign_var}")

# --- Relational and Logical Operators ---
print("\n--- Relational and Logical Operators ---")
is_equal = (integer_a == integer_b)
print(f"Is 10 equal to 3? {is_equal}")

is_greater = (integer_a > integer_b)
print(f"Is 10 greater than 3? {is_greater}")

logic_and = (integer_a > 5 and integer_b < 5)
print(f"Logical AND (10 > 5 and 3 < 5): {logic_and}")

logic_or = (integer_a < 5 or integer_b < 5)
print(f"Logical OR (10 < 5 or 3 < 5): {logic_or}")

logic_not = not(integer_a < 5)
print(f"Logical NOT (not (10 < 5)): {logic_not}")
