def timer(func):
    def inner():
        print('time started')
        func()
        print('time ended')
    return inner

@timer
def get_factorial():
    print('factorial starting')

get_factorial()