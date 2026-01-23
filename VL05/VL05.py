sum_result = 0
end_index = int(input())
limit = end_index * 3 + 1
for i in range(1,limit + 1):
    if i % 2 == 1:
        sum_result += i
    else:
        sum_result += i * -1
print((sum_result))