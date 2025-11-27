from dataclasses import dataclass
from typing import ClassVar

@dataclass
class BankAccount:
    owner: str
    _balance: float = 0.0          # Protected-like
    __pin: int = 1234              # Name mangling (private)

    # Class variable (shared)
    bank_name: ClassVar[str] = "Global Bank"

    @property
    def balance(self) -> float:
        """Read-only balance"""
        return self._balance

    @balance.setter
    def balance(self, value: float):
        if value < 0:
            raise ValueError("Balance cannot be negative!")
        self._balance = value

    def deposit(self, amount: float, pin: int) -> None:
        self._validate_pin(pin)
        if amount <= 0:
            raise ValueError("Deposit amount must be positive")
        self._balance += amount

    def withdraw(self, amount: float, pin: int) -> None:
        self._validate_pin(pin)
        if amount > self._balance:
            raise ValueError("Insufficient funds")
        self._balance -= amount

    def _validate_pin(self, pin: int) -> None:
        if pin != self.__pin:
            raise PermissionError("Invalid PIN!")

    def __str__(self) -> str:
        return f"Account({self.owner}, Balance=₹{self.balance})"


# Usage
acc = BankAccount("Alice")
acc.deposit(5000, 1234)
acc.withdraw(1000, 1234)
print(acc)