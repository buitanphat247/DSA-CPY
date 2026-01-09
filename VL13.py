import math
def sum_divisors(number:int):
    sum_solve = 0
    list_num = list()
    for i in range(1, int(math.sqrt(number)) + 1):
        if number % i == 0:
            sum_solve += i
            list_num.append(i)
            if i*i != number:
                list_num.append(number//i)
                sum_solve += number//i
    sum_solve -= number
    if sum_solve == number:
        print("YES")
    else:
        print("NO")

number = int(input())
sum_divisors(abs(number))