class Phone:
    manufactured = 'China'

    # constructor
    def __init__(self,owner,brand,price):
        self.owner = owner
        self.brand = brand
        self.price = price

    def send_sms(self,phone,sms):
        text = f'sending to : {phone} {sms}'
        print(text)

my_phone = Phone('kala chan','oppo',9800)
print(my_phone.owner,my_phone.brand,my_phone.price)

Towsif_phone = Phone('Towsif','Redmi Note 10S',25000)
print(Towsif_phone.owner,Towsif_phone.brand,Towsif_phone.price)