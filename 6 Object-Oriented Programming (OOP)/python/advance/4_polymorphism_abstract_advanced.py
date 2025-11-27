from abc import ABC, abstractmethod
from typing import Protocol

# Protocol (Structural subtyping - Modern Python way)
class Drawable(Protocol):
    def draw(self) -> None: ...

# Abstract Base Class
class Shape(ABC):
    @abstractmethod
    def area(self) -> float: pass

    @abstractmethod
    def draw(self) -> None: pass

    def info(self):
        print(f"Shape: {self.__class__.__name__}, Area: {self.area()}")

class Circle(Shape):
    def __init__(self, radius: float):
        self.radius = radius

    def area(self) -> float:
        return 3.14159 * self.radius ** 2

    def draw(self):
        print("Drawing Circle")

class Rectangle(Shape):
    def __init__(self, w, h):
        self.w, self.h = w, h

    def area(self) -> float:
        return self.w * self.h

    def draw(self):
        print("Drawing Rectangle")

# Polymorphism in action
def render_shapes(shapes: list[Drawable]):
    for shape in shapes:
        shape.draw()

shapes = [Circle(5), Rectangle(4, 6)]
for s in shapes:
    s.info()

render_shapes(shapes)