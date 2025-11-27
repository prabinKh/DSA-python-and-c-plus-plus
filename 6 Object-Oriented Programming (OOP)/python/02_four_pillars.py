from turtle import pensize


class BankAccount:
    def __init__(self,name,balance=0):
        self.name = name
        self.balance = balance
    def deposit(self,amount):
        if amount > 0:
            self.balance += amount
            print(f"Deposited {amount} successfully")
        else:
            print("Deposit amount must be positive")

    def get_balance(self):
        return self.balance

    
class Animal:
    def speak(self):
        print("Animal speaks")
class Dog(Animal):
    def speak(self):
        super().speak()
        print("Dog barks")


class Cat(Animal):
    def speak(self):
        super().speak()
        print("Cat meows")



class A:
    def show(self):
        print("In A")
    
class B(A):
    pass

class C(A):
    def show(self):
        print("C")

class D(B,C):
    pass
