n = int(input())

s = 0.0
tich = 1
for i in range(1, n + 1):
    tich = i * (i+1)
    s += (1.0/float(tich))

print(f"{s:.5f}")
