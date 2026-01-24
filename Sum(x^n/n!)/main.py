n = float(input())
x = float(input())

result = 1.0
sum = 1.0
for i in range(1, n + 1):
    result = result * x / i
    sum += result

print(f"{sum:.2f}")
