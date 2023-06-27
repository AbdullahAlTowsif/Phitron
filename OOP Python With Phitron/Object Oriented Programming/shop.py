class Shop:
    # class attribute
    cart = []
    def __init__(self,buyer):
        self.buyer = buyer

    def add_to_cart(self,item):
        self.cart.append(item)

mehzabin = Shop('Mehzabin')
mehzabin.add_to_cart('Shoes')
mehzabin.add_to_cart('phone')
print(mehzabin.cart)

nisho = Shop('nisho')
nisho.add_to_cart('cap')
nisho.add_to_cart('watch')
print(nisho.cart)