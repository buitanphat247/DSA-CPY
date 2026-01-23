def sovlegiaithua(end_index: int):
    if end_index < 0:
        return None
    tich = 1
    for i in range(1, end_index + 1):
        tich *= i
    return tich


x, n = input().split()
x = float(x)
n = int(n)

S = 0.0
for i in range(1, n + 1):
    S += (x ** i) / sovlegiaithua(i)

print(f"{S:.2f}")
