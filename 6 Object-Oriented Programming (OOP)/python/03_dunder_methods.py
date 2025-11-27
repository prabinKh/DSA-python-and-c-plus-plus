
class Book:
    def __init__(self, title, pages):
        self.title = title
        self.pages = pages

    def __str__(self):
        return f"Book: {self.title}"

    def __repr__(self):
        return f"Book('{self.title}', {self.pages})"

    def __len__(self):
        return self.pages

    def __add__(self, other):
        return self.pages + other.pages

    def __eq__(self, other):
        return self.title == other.title

    def __call__(self):
        print(f"Reading {self.title} now!")

    def __getitem__(self, index):
        return f"Page {index} of {self.title}"

# Usage
b1 = Book("Python", 300)
b2 = Book("Python", 400)
print(b1)
print(repr(b1))
print(len(b1))
print(b1 + b2)
b1()
print(b1[10])