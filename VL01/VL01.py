number_a = map(int, input().split())
result = ""
for item in range(number_a, number_b + 1):
    result += str(item) + " "
print(result)