# list --> []
# tuple --> ()
# set --> {}

numbers = [12,56,98,78,56,12,6,98]
print(numbers)
numbers_set = set(numbers)
print(numbers_set)
numbers_set.add(55)
print(numbers_set)

A = {1,3,5}
B = {1,2,3,4,5}

print(A & B)
print(A|B)

# Tuple contains duplicate but set doesn't