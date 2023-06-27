# function is a first class object
def double_decker():
    print('starting the double decker')
    def inner_fun():
        print('inside the inner')
        return 3000
    return inner_fun

print(double_decker()())

def do_something(work):
    print('work started')
    work()
    print('work ended')

def coding():
    print('coding in python')

do_something(coding)