def call():
    print('calling someone i don\'t know')
    return 'call done'

class Phone:
    price = 120000
    color = 'blue'
    brand = 'samsung'
    features = ['camera','speaker','hammer']

    def call(self):
        print('calling one person')

    def send_sms(self,phone,sms):
        text = f'sending sms to:{phone} and message {sms}'
        return text

my_phone = Phone()
print(my_phone.features)
my_phone.call()
result = my_phone.send_sms(1641413635,'I love me')
print(result)