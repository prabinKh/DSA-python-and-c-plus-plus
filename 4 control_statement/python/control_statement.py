# ===============================================
# Python Control Statements - Full Demo
# ===============================================

# 1. DECISION MAKING STATEMENTS
print("1. DECISION MAKING")
print("-" * 40)

# 1.1 if statement
print("→ if statement")
age = 20
if age >= 18:
    print("  You are an adult.")
print()

# 1.2 if-else statement
print("→ if-else statement")
marks = 75
if marks >= 60:
    print("  Pass")
else:
    print("  Fail")
print()

# 1.3 if-elif-else ladder
print("→ if-elif-else ladder")
score = 92
if score >= 90:
    grade = 'A'
elif score >= 80:
    grade = 'B'
elif score >= 70:
    grade = 'C'
elif score >= 60:
    grade = 'D'
else:
    grade = 'F'
print(f"  Score {score} → Grade: {grade}")
print()

# 1.4 Nested if
print("→ Nested if")
num = 10
if num > 0:
    print("  Positive number")
    if num % 2 == 0:
        print("  Also even")
    else:
        print("  Also odd")
print()

# 1.5 Python has NO switch-case (before 3.10)
# But from Python 3.10+ → Structural Pattern Matching (match-case)

print("→ match-case (Python's switch equivalent - 3.10+)")
def http_status(status):
    match status:
        case 200:
            return "OK"
        case 404:
            return "Not Found"
        case 500 | 501 | 502 | 503:
            return "Server Error"
        case _:
            return "Unknown"

print("  HTTP 200 →", http_status(200))
print("  HTTP 404 →", http_status(404))
print("  HTTP 501 →", http_status(501))
print()

# 2. LOOPING STATEMENTS
print("2. LOOPING STATEMENTS")
print("-" * 40)

# 2.1 for loop
print("→ for loop")
print("  Numbers 0 to 4:", end=" ")
for i in range(5):
    print(i, end=" ")
print("\n")

print("  Even numbers 2 to 10:", end=" ")
for i in range(2, 11, 2):
    print(i, end=" ")
print("\n")

print("  Iterating over string:")
for char in "Python":
    print(" ", char)
print()

# 2.2 while loop
print("→ while loop")
count = 5
while count > 0:
    print(f"  Countdown: {count}")
    count -= 1
print()

# 2.3 Python has NO do-while loop!
# But we can simulate it:
print("→ Simulated do-while")
attempts = 0
while True:
    attempts += 1
    print(f"  Attempt {attempts}")
    if attempts >= 3:
        break
print("  (do-while simulation complete)\n")

# 2.4 Nested loops
print("→ Nested loops - Multiplication Table (1-5)")
for i in range(1, 6):
    for j in range(1, 6):
        print(f"{i*j:4}", end="")
    print()  # new line after each row
print()

# 3. JUMP STATEMENTS
print("3. JUMP STATEMENTS")
print("-" * 40)

# 3.1 break - exits the loop immediately
print("→ break statement")
for i in range(1, 10):
    if i == 6:
        print("  Breaking at", i)
        break
    print("  ", i)
print()

# 3.2 continue - skips rest of current iteration
print("→ continue statement - print only odd numbers")
for i in range(1, 8):
    if i % 2 == 0:
        continue  # skip even numbers
    print("  ", i)
print()

# 3.3 pass - does nothing (placeholder)
print("→ pass statement")
for i in range(5):
    if i == 3:
        pass  # TODO: implement later
        print("  This will be executed")
    print("  ", i)
print()

# 3.4 Python has NO goto statement! (intentionally removed)
# People sometimes use tricks, but it's considered harmful
print("→ goto")
print("  Python does NOT have 'goto'. It's banned by design!")
print("  Use structured programming instead.\n")

# Bonus: else clause with loops (runs if NO break occurred)
print("→ Loop else clause")
print("Searching in list...")
numbers = [1, 2, 7, 4]
for n in numbers:
    if n == 3:
        print("  Found 3!")
        break
else:
    print("  3 not found in list - else clause executed!")
print()

# Final Summary
print("="*50)
print("SUMMARY OF CONTROL FLOW IN PYTHON")
print("="*50)
print("✓ if, if-else, if-elif-else")
print("✓ Nested if")
print("✓ match-case (switch) → Python 3.10+")
print("✓ for loop, while loop")
print("✗ do-while → Not available (simulate with while True + break)")
print("✓ Nested loops")
print("✓ break, continue, pass")
print("✗ goto → Does NOT exist and never will!")
print("="*50)