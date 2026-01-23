from math import sqrt

T = int(input())

for _ in range(T):
    n = int(input())

    x = 0.0
    for i in range(1, n + 1):
        x = sqrt(i + x)

    print(f"{x:.5f}")
