class Flyable:
    def fly(self):
        print(f"{self.__class__.__name__} is flying")

class Swimmable:
    def swim(self):
        print(f"{self.__class__.__name__} is swimming")

    
class Animal:
    def breathe(self):
        print('Breathing..')



class Duck(Animal, Flyable, Swimmable):
    def quack(self):
        print("Quack quack")

class ElectricDuck(Duck):
    def __init__(self,battery=100):
        self.battery = battery

    def fly (self):
        if self.battery > 20:
            super().fly()

            self.battery-=20
        else:
            print("Battery low, cannot fly")


d = ElectricDuck()
d.breathe()
d.fly()
d.quack()
d.swim()
print(ElectricDuck.mro())
