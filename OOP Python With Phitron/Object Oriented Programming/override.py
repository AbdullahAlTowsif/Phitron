class Person:
    def __init__(self,name,age,height,weight) -> None:
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight
        
    def eat(self):
        print('Bhat meat polao korma')

    def exercise(self):
        raise NotImplementedError

class Cricketer(Person):
    def __init__(self, name, age, height, weight,team) -> None:
        self.team = team
        super().__init__(name, age, height, weight)

    def eat(self):
        print('vegetables')

    def exercise(self):
        print('gym e poisa diya hudai gham jorai')


    # overload
    def __add__(self,other):
        return self.age + other.age
    
    def __mul__(self,other):
        return self.weight * other.weight

sakib = Cricketer('sakib',38,68,91,'BD')
Mushi = Cricketer('Mushfiq',36,66,78,'BD')
sakib.eat()
sakib.exercise()

print(sakib * Mushi)