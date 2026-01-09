import math
def check_snt(number:int):
    if number < 2: return False
    if number == 2: return True
    if number % 2 == 0: return False
    for i in range(3, int(math.sqrt(number)) + 1, 2):
        if number % i == 0:
            return False
    return True

if check_snt(int(input())):
    print("YES")
else:
    print("NO")