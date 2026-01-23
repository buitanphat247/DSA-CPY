import math
def division(number:int):
    list_divisor = list()
    for i in range(1, int(math.sqrt(number)) + 1):
        if number % i == 0:
            list_divisor.append(i)
            if i != number // i:
                list_divisor.append(number // i)
    list_divisor.sort()
    list_divisor.reverse()
    for item in list_divisor:
        print(item, end=" ")

number = int(input())
if number == 0:
    print("INF")
else:
    division(abs(number))