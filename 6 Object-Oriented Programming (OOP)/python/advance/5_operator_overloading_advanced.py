from __future__ import annotations
from typing import Self

class Vector:
    def __init__(self, x: float, y: float):
        self.x, self.y = x, y

    def __add__(self, other: Self) -> Self:
        return Vector(self.x + other.x, self.y + other.y)

    def __sub__(self, other: Self) -> Self:
        return Vector(self.x - other.x, self.y - other.y)

    def __mul__(self, scalar: float) -> Self:  # Vector * scalar
        return Vector(self.x * scalar, self.y * scalar)

    def __rmul__(self, scalar: float) -> Self:  # scalar * Vector
        return self.__mul__(scalar)

    def __truediv__(self, scalar: float) -> Self:
        if scalar == 0:
            raise ZeroDivisionError("Cannot divide by zero")
        return Vector(self.x / scalar, self.y / scalar)

    def __neg__(self) -> Self:
        return Vector(-self.x, -self.y)

    def __eq__(self, other: object) -> bool:
        if not isinstance(other, Vector):
            return False
        return self.x == other.x and self.y == other.y

    def __repr__(self) -> str:
        return f"Vector({self.x}, {self.y})"

    def __len__(self) -> int:
        return 2

    def __getitem__(self, index: int):
        return (self.x, self.y)[index]


# Usage
v1 = Vector(3, 4)
v2 = Vector(1, 2)
print(v1 + v2)
print(v1 - v2)
print(2 * v1)
print(-v1)
print(v1 / 2)
print(v1[0])