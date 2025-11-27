# String to number
age = int(input("Enter age: "))          # "25" → 25
price = float("19.99")                   # → 19.99

# Number to string (needed for concatenation)
name = "Alice"
age = 30
message = name + " is " + str(age) + " years old."

# Converting between collection types
s = "hello"
list_s = list(s)      # ['h', 'e', 'l', 'l', 'o']
tuple_s = tuple(s)    # ('h', 'e', 'l', 'l', 'o')
set_s = set(s)        # {'h', 'e', 'l', 'o'}

# Converting nested structures
pairs = [(1, 'one'), (2, 'two')]
d = dict(pairs)       # {1: 'one', 2: 'two'}