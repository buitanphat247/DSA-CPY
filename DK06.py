a, b = map(float, input().split())

if a == 0:
    if b == 0:
        print("WOW")
    else:
        print("NO")
else:
    x = -b / a
    print(f"{x:.2f}")
