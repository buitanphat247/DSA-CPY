n = int(input())
count_loop = 0
while count_loop < n:
    str_number = str(input())
    result = 0
    for item in str_number:
        result += int(item)
    print(result)
    count_loop += 1