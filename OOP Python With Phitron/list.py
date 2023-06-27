# list, array, collection all are same

numbers = [45,56,12,89,87,32,84,59,46,93]
print(numbers[3],numbers[-3])

# list(start : end)
print(numbers[2:6]) # start from the start index and stops before the end index

# list(start: end : step)
print(numbers[1:7:2])
print(numbers[7:2:-1])

# by default
print(numbers[4:]) # till last
print(numbers[:5]) # from first
print(numbers[:]) # first to last
print(numbers[::-1])