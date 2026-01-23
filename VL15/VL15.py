import math

a, b = map(int, input().split())

if b == 0:
    print("INVALID")
else:
    g = math.gcd(a, b)
    a //= g
    b //= g

    if b < 0:
        a = -a
        b = -b

    if b == 1:
        print(a)
    else:
        print(a, b)
