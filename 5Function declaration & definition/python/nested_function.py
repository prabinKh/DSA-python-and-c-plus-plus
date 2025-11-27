def outer(msg):
    def inner():
        print("Message:", msg)
    return inner

func = outer("Hello from closure!")
func()

# Counter using closure
def make_counter():
    count = 0
    def increment():
        nonlocal count
        count += 1
        return count
    return increment

counter = make_counter()
print(counter())
print(counter())
print(counter())