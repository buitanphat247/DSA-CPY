n = int(input())
sum_result = 1.0
current_sum = 1
for i in range(2, n + 1):
    current_sum += i
    sum_result += 1.0 / current_sum
print(f"{sum_result:.6f}")
