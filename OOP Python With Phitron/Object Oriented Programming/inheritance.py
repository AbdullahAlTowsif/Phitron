class Gadget:
    def __init__(self,brand,price,color,origin) -> None:
        self.brand = brand
        self.price = price
        self.color = color
        self.origin = origin

    def run(self):
        return f'Running laptop : {self.brand}'

class Laptop:
    def __init__(self,memory,ssd) -> None:
        self.memory = memory
        self.ssd = ssd
    
    def coding(self):
        return f'Learning python and practicing'
    
class Phone(Gadget):
    def __init__(self,brand,price,color,origin,dual_sim) -> None:
        self.dual_sim = dual_sim
        super().__init__(brand,price,color,origin)
    
    def phone_call(self,number,text):
        return f'Sending SMS to : {number} with: {text}'
    
    def __repr__(self) -> str:
        return f'Phone: {self.brand} {self.price} {self.dual_sim}'
    
class Camera:
    def __init__(self,pixel) -> None:
        self.peixel = pixel

    def change_lens(self):
        pass 

my_phone = Phone('iphone',120000,'silver','china',True)
print(my_phone.brand)
print(my_phone)