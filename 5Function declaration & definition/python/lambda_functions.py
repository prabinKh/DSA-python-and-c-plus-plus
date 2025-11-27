square = lambda x: x ** 2
add = lambda a, b=10: a + b

print(square(5))
print(add(20))
print(add(20, 30))

numbers = [1, 5, 2, 8, 3]
sorted_nums = sorted(numbers, key=lambda x: x % 3)
print("Sorted by remainder when divided by 3:", sorted_nums)