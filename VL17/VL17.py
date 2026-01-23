import math

def count_divisors(number:int):
    if number < 0:
        return 0
    count  = 0
    for i in range(1,int(math.sqrt(number))+1):
        if number % i == 0:
            if i * i == number:
                count  += 1
            else:
                count  += 2
    return count

print(count_divisors(abs(int(input()))))
