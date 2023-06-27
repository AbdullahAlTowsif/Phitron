# abstract base class
from abc import ABC, abstractmethod

class Animal(ABC):
    @abstractmethod # enforce all derived class to have a eat method
    def eat(self):
        print('I need food')
    @abstractmethod
    def move(self):
        print('I can move')

class Monkey(Animal):
    def __init__(self,name) -> None:
        self.category = 'Monkey'
        self.name = name
        super().__init__()

    def eat(self):
        print('Hey nana, I am eating banana')

    def move(self):
        print('Hanging on the branch')

layka = Monkey('Lucky')
layka.eat()
layka.move()