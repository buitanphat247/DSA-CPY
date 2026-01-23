from math import sqrt

T = int(input())

for _ in range(T):
    n = int(input())

    x = sqrt(2)
    for _ in range(n - 1):
        x = sqrt(2 + x)

    print(f"{x:.5f}")
