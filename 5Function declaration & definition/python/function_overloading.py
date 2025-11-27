from functools import singledispatch

@singledispatch
def process(data):
    print("Generic data:", data)

@process.register
def _(data: int):
    print("Integer received:", data * 2)

@process.register
def _(data: str):
    print("String received:", data.upper())

@process.register
def _(data: list):
    print("List received, length:", len(data))

process(10)
process("hello")
process([1, 2, 3])
process(3.14)  # falls back to generic