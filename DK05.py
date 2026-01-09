import math

def so_chinh_phuong(number : int):
    if number < 0:
        return "NO"
    number_sqrt = int(math.sqrt(number))
    if pow(number_sqrt,2) == number:
        return "YES"
    return "NO"

print(so_chinh_phuong(int(input())))
