def full_name(first,last):
    name = f'full name is: {first} {last}'
    return name
# take parameters in order
# name = full_name('alu','kodu')
name = full_name(last = 'kodu', first='alu')
print(name)

def famous_name(first,last,**addition):
    name = f'{first} {last}'
    print(addition['title'])
    return name
name = famous_name(first='Taher',last='Ali',title='Hujur',addition='Shayokh')
print(name)

# return multiple things from an array
def a_lot(num1,num2):
    sum = num1 + num2
    multiplication = num1 * num2
    subtraction = num1 - num2
    return sum,multiplication,subtraction
everything = a_lot(55,21)
print(everything)