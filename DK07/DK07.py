import math

a, b, c = map(int, input().split())

if a == 0:
    if b == 0:
        if c == 0:
            print("WOW")
        else:
            print("NO")
    else:
        x = -c / b
        print(f"{x:.2f}")
else:
    delta = b*b - 4*a*c
    if delta < 0:
        print("NO")
    elif delta == 0:
        x = -b / (2*a)
        print(f"{x:.2f}")
    else:
        sqrt_delta = math.sqrt(delta)
        x1 = (-b - sqrt_delta) / (2*a)
        x2 = (-b + sqrt_delta) / (2*a)
        if x1 > x2:
            x1, x2 = x2, x1

        print(f"{x1:.2f} {x2:.2f}")
