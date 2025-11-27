def greet(name="Guest", age=18, city="Unknown"):
    print(f"Hello {name}, you are {age} years old from {city}.")

# Calling with different number of arguments
greet("Alice", 25, "Paris")
greet("Bob", 30)
greet("Charlie")
greet()  # All defaults