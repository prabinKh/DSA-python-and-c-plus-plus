from copy import deepcopy
from typing import List

class Employee:
    total_employees = 0

    def __init__(self, name: str, salary: float, skills: List[str] = None):
        print("Parameterized Constructor Called")
        self.name = name
        self.salary = salary
        self.skills = skills[:] if skills else []  # Deep copy list
        Employee.total_employees += 1

    @classmethod
    def from_string(cls, emp_str: str):
        """Alternative constructor"""
        name, salary = emp_str.split("-")
        return cls(name, float(salary))

    def __del__(self):
        print(f"Employee {self.name} object destroyed")
        Employee.total_employees -= 1

    def __repr__(self) -> str:
        return f"Employee('{self.name}', {self.salary}, {self.skills}')"

    def __copy__(self):
        """Support shallow copy"""
        return Employee(self.name, self.salary, self.skills)

    def __deepcopy__(self, memo):
        """Support deep copy"""
        return Employee(self.name, self.salary, deepcopy(self.skills, memo))


# Usage
e1 = Employee("John", 90000, ["Python", "Django"])
e2 = Employee.from_string("Alice-85000")
e3 = deepcopy(e1)
e3.skills.append("Docker")
print(e1.skills)  # Not affected