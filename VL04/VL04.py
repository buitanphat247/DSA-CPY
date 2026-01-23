number = int(input())
sum_result = 0.0
for i in range(1, number):
    sum_result += 1/(i+1)
print(f"{sum_result:.4f}")