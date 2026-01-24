number_one, number_two = map(str, input().split())
len_number_one = len(number_one)
len_number_two = len(number_two)

results = [0] * (len_number_one + len_number_two)
for i in range(len_number_one - 1, -1, -1):
    for j in range(len_number_two - 1, -1, -1):
        multiple = int(number_one[i]) * int(number_two[j])
        sum = multiple + results[i + j + 1]
        results[i + j + 1] = sum % 10
        results[i + j] += sum // 10
i = 0
while i < len_number_one + len_number_two - 1 and results[i] == 0:
    i += 1

results_number = ""
for i in range(i,len_number_one+len_number_two):
    results_number += str(results[i])
print(results_number)