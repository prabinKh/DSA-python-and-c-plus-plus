
class Engine:
    def start(self):
        print("Engine started")

class Car:
    def __init__(self):
        self.engine = Engine()  # Composition

    def start(self):
        self.engine.start()

# Aggregation
class Department:
    def __init__(self, name):
        self.name = name
        self.employees = []  # Aggregation

    def add_employee(self, emp):
        self.employees.append(emp)

# __slots__ for memory optimization
class Point:
    __slots__ = ['x', 'y']
    def __init__(self, x, y):
        self.x = x
        self.y = y

# Mixin
class JSONMixin:
    def to_json(self):
        return f'{{"x": {self.x}, "y": {self.y}}}'

class SmartPoint(Point, JSONMixin):
    pass

p = SmartPoint(10, 20)
print(p.to_json())