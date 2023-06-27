numbers = [12,56,98,78,56,12,6,98]
person1 = ['Kala Chan','Kalipur',23,'student']
person = {'name':'Kala Pakhi','address':'Kaliapur','age':23,'job':'bekar'}
print(person)
print(person['job'])
print(person.keys())
# {key: value,key: value,key: value}
print(person.values())
person['language'] = 'python'
print(person)
del person['age']
print(person)

# special dictionary looping
for key,value in person.items():
    print(key,value)