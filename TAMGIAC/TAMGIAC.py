import math

a, b, c = map(int, input().split())

if a + b <= c or a + c <= b or b + c <= a:
    print("NO")
else:
    P = a + b + c

    p = P / 2

    S = math.sqrt(p * (p - a) * (p - b) * (p - c))

    print(P, f"{S:.2f}")
