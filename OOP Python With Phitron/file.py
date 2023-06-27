# .csv = comma seperated value

# with open('message.txt','w') as file:
#     file.write('I love you, Python')

# with open('message.txt','a') as file:
#     file.write('Python is a very famous programming language')

with open('message.txt','r') as file:
    text = file.read()
    print(text)