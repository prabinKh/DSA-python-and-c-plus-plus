def add_numbers(a: int, b: int):
    return a + b

def greet(name: str):
    return f"Hello {name}!"

print(add_numbers(5, 3))
print(greet("Alice"))

# With default and complex types
from typing import List

def process_items(items: List[str]):
    for item in items:
        print(item.upper())

process_items(["apple", "banana"])