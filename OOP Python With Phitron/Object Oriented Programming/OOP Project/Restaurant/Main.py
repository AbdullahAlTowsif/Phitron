from Menu import Pizza,Burger,Drinks,Menu
from Restaurant import Restaurant
from User import Chef,Customer,Server,Manager
from Order import Order

def main():
    menu = Menu()

    # add pizza to menu
    pizza_1 = Pizza('Shutki Pizza',600,'large',['shutki','onion'])
    menu.add_menu_item('pizza',pizza_1)
    pizza_2 = Pizza('Alur Vorta Pizza',400,'large',['potato','onion','oil'])
    menu.add_menu_item('pizza',pizza_2)
    pizza_3 = Pizza('Dal Pizza',500,'large',['dal','oil'])
    menu.add_menu_item('pizza',pizza_3)

    # add burger to menu
    burger_1 = Burger('Naga Burger',1000,'chicken',['bread','chili'])
    menu.add_menu_item('burger',burger_1)
    burger_2 = Burger('Beef Burger',1200,'beef',['goru','haddi'])
    menu.add_menu_item('burger',burger_2)

    # add drinks to menu
    coke = Drinks('coke',50,True)
    menu.add_menu_item('drinks',coke)
    coffe = Drinks('Mocha',300,False)
    menu.add_menu_item('drinks',coffe)

    # show menu
    menu.show_menu()

    restaurant = Restaurant('Sai Baba Restaurant',2000,menu)
    manager = Manager('Kala Chan Manager',5,'kala@chan.com','kaliapur',1500,'Jan 1 2020','core')
    restaurant.add_employee('manager',manager)
    chef = Chef('Rustom Baburchi',6,'chupa@rustom.com','rustomNagar',3500,'Feb 1,2020','Chef','everything')
    restaurant.add_employee('chef',chef)
    server = Server('Chotu server',6,'nai@jai.com','restaurant',200,'March 1 2020','server')
    restaurant.add_employee('server',server)

    # show employees
    restaurant.show_employees()
    # customer one placing order
    customer_1 = Customer('sakib khan',6,'king@khan.com','banani',100000)
    order_1 = Order(customer_1,[pizza_3,coffe])
    customer_1.pay_for_orders(order_1)
    restaurant.add_order(order_1)

    # customer one paying for order_1
    restaurant.receive_payment(order_1,2000,customer_1)
    print('Revenue and balance after first customer: ',restaurant.revenue,restaurant.balance)
    # customer two plaicng order
    customer_2 = Customer('sakib Al Hasan',6,'king@khan.com','banani',100000)
    order_2 = Order(customer_2,[pizza_1,burger_2,coffe])
    customer_2.pay_for_orders(order_2)
    restaurant.add_order(order_2)

    # customer two paying for order_2
    restaurant.receive_payment(order_2,5000,customer_2)
    print('Revenue and balance after second customer: ',restaurant.revenue,restaurant.balance)

    # pay rent
    restaurant.pay_expense(restaurant.rent,'Rent')
    print('after rent:',restaurant.revenue,restaurant.balance,restaurant.expense)

    restaurant.pay_salary(chef)
    print('after salary:',restaurant.revenue,restaurant.balance,restaurant.expense)

# call the main
if __name__ == '__main__':
    main()