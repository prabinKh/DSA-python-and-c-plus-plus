class NegativeDepositError(Exception):
    def __init__(self, amount):
        self.amount = amount
        super().__init__(f"Cannot deposit negative: {amount}")

class Account:
    def __init__(self, balance=0):
        self.balance = balance

    def deposit(self, amount):
        if amount < 0:
            raise NegativeDepositError(amount)
        self.balance += amount

# Usage
acc = Account()
try:
    acc.deposit(-500)
except NegativeDepositError as e:
    print(e)