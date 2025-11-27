class Car:
    total_cars = 0
    def __init__ (self,brand , model):
        self.brand = brand
        self.model = model
        Car.total_cars += 1

    def full_name(self):
        return f"{self.brand} {self.model}"
    
    def get_total_cars(cls):
        return f"Total cars created : {cls.total_cars} "

    def is_valid_brand (brand_name):
        return len(brand_name) > 2


c1= Car("Toyota","Corolla")
print(c1.full_name())
c2= Car("Honda","Civic")
print(c2.full_name())
print(Car.get_total_cars())
print(Car.is_valid_brand("Toy"))


    
 
