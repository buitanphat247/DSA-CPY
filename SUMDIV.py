import math

T = int(input())
for _ in range(T):
    n = int(input())
    s = 0
    r = int(math.isqrt(n))

    for i in range(1, r + 1):
        if n % i == 0:
            s += i
            if i != n // i:
                s += n // i

    print(s)
