numbers = [45,87,96,65,43,85,14,26,61,70]
odds=[]
for num in numbers:
    if num%2==1 and num%5==0:
        odds.append(num)
print(odds)

# odd_nums = [num for num in numbers if num%2==1]
# print(odd_nums)