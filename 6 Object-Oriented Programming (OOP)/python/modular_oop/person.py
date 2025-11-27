class Person:
    def __init__(self,name):
        self.name = name

    def greet(self):
        return f"hello , i, am {self.name}"
__all__ = ['Person']