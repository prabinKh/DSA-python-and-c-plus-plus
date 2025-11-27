# ========================================
# Python Operators - Complete Demo
# ========================================

# 1. Arithmetic Operators
print("=== Arithmetic Operators ===")
a, b = 10, 3
print(f"{a} + {b} = {a + b}")      # Addition
print(f"{a} - {b} = {a - b}")      # Subtraction
print(f"{a} * {b} = {a * b}")      # Multiplication
print(f"{a} / {b} = {a / b}")      # Division (float)
print(f"{a} // {b} = {a // b}")    # Floor Division
print(f"{a} % {b} = {a % b}")      # Modulus
print(f"{a} ** {b} = {a ** b}")    # Exponentiation
print()

# 2. Relational (Comparison) Operators
print("=== Relational Operators ===")
x, y = 5, 7
print(f"{x} == {y} → {x == y}")
print(f"{x} != {y} → {x != y}")
print(f"{x} > {y} → {x > y}")
print(f"{x} < {y} → {x < y}")
print(f"{x} >= {y} → {x >= y}")
print(f"{x} <= {y} → {x <= y}")
print()

# 3. Logical Operators
print("=== Logical Operators ===")
p = True
q = False
print(f"p and q → {p and q}")
print(f"p or q  → {p or q}")
print(f"not p    → {not p}")
print(f"(5 > 3) and (10 < 20) → {(5 > 3) and (10 < 20)}")
print()

# 4. Assignment Operators
print("=== Assignment Operators ===")
num = 10
print(f"Initial num = {num}")

num += 5    # num = num + 5
print(f"After += 5  → {num}")

num -= 3
print(f"After -= 3  → {num}")

num *= 2
print(f"After *= 2  → {num}")

num /= 4
print(f"After /= 4  → {num}")

num //= 2
print(f"After //= 2 → {num}")

num **= 3
print(f"After **= 3 → {num}")
print()

# 5. Bitwise Operators
print("=== Bitwise Operators ===")
m, n = 5, 3        # 5 = 101, 3 = 011
print(f"m = {m} (binary: {bin(m)})")
print(f"n = {n} (binary: {bin(n)})")

print(f"m & n  = {m & n}  → {bin(m & n)}")   # AND
print(f"m | n  = {m | n}  → {bin(m | n)}")   # OR
print(f"m ^ n  = {m ^ n}  → {bin(m ^ n)}")   # XOR
print(f"~m     = {~m}     → {bin(~m)}")      # NOT
print(f"m << 2 = {m << 2} → {bin(m << 2)}")   # Left shift
print(f"m >> 1 = {m >> 1} → {bin(m >> 1)}")   # Right shift
print()

# 6. Ternary (Conditional) Operator
print("=== Ternary Operator ===")
age = 20
status = "Adult" if age >= 18 else "Minor"
print(f"Age {age} → {status}")

score = 85
grade = "A" if score >= 90 else "B" if score >= 80 else "C"
print(f"Score {score} → Grade: {grade}")
print()

# 7. Operator Precedence Example
print("=== Operator Precedence Demo ===")
exp1 = 2 + 3 * 4 ** 2          # ** > * > +
print(f"2 + 3 * 4 ** 2 = {exp1}")   # 50

exp2 = (2 + 3) * 4 ** 2
print(f"(2 + 3) * 4 ** 2 = {exp2}") # 80

exp3 = 10 > 5 and 3 < 8 or not 4 == 4
print(f"10 > 5 and 3 < 8 or not 4 == 4 → {exp3}")
print()

# Bonus: No ++ or -- in Python!
print("=== Increment / Decrement ===")
count = 0
count += 1   # This is the Python way
print(f"count after += 1 → {count}")

