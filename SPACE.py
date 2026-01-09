n = int(input())
index_loop = 0
while index_loop < n:
    str_space = str(input())
    check = False
    count = 0
    for i in range(0, len(str_space)):
        if str_space[i] != " ":
            check = False
            continue
        else:
            if not check:
                check = True
                count +=1
                continue
            else:
                continue
    print(count)
    index_loop += 1