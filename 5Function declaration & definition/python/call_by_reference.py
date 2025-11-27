def modify_immutable(x):
    x = 100
    print("Inside function (immutable):", x)

def modify_mutable(lst):
    lst.append(42)
    print("Inside function (mutable):", lst)

# Immutable example
a = 10
modify_immutable(a)
print("After call (immutable):", a)

# Mutable example
my_list = [1, 2, 3]
modify_mutable(my_list)
print("After call (mutable):", my_list)