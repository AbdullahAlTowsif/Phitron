class Shopping:
    def __init__(self,name):
        self.name = name
        self.cart = []

    def add_to_cart(self,item,price,quantity):
        product = {'item':item,'price':price,'quantity':quantity}
        self.cart.append(product)

    def checkout(self,amount):
        total = 0
        for item in self.cart:
            print(item)
            total += item['price'] * item['quantity']
        print('total price : ',total)
        if amount<total:
            print(f'Please Provide :{total - amount} more')
        else:
            extra = amount - total
            print(f'here is your items and xtra money {extra}')

shawapan = Shopping('Alan Shwapan')
shawapan.add_to_cart('alu',50,6)
shawapan.add_to_cart('dim',12,24)
shawapan.add_to_cart('rice',50,5)

print(shawapan.cart)
shawapan.checkout(1600)