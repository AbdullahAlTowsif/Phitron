class Animal:
    def __init__(self,name) -> None:
        self.name = name

    def make_sound(self):
        print('Animal making some sound')

class Cat(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)

    def make_sound(self):
        print('Meow Meow')

class Dog(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)

    def make_sound(self):
        print('Ghew Ghew')

class Goat(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)

don = Cat('Real Don')
don.make_sound()

bob = Dog('Dhakkiti')
bob.make_sound()

messy = Goat('L M')
messy.make_sound()

animals = [don,bob,messy]
for animal in animals:
    animal.make_sound()