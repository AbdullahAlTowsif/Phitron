# input('Give me some money : ')
money = input('Give me my money: ')
print('here is your money :',money)
first_money = input('Kodom Ali, Dosto kichu taka dey : ')
second_money = input('Peyara Begum, Dosto kichu taka dey : ')
print(type(first_money))
# by default the input from user will be string type
print('Money I got',first_money, 'and' ,second_money)
first_money_int = int(first_money)
second_money_int = int(second_money)
print(type(first_money_int))
total = first_money_int + second_money_int
print('total money: ',total)
total = first_money + second_money
print('total money I got : ',total)