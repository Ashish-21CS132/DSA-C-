class Singleton:
    _instance = None
    
    def __new__(cls):
        if cls._instance is None:
            cls._instance = super().__new__(cls)
        return cls._instance

print(Singleton._instance)

class Book:
    def __init__(self, pages):
        self.pages = pages
    
    def __add__(self, other):
        return Book(self.pages + other.pages)

book1 = Book(100)
book2 = Book(150)
book3 = book1 + book2
print(book3.pages)  # Output: 250
