str_input = str(input()).strip()
check = False
count = 0
for char in range(0,len(str_input)):
    if str_input[char] != " ":
        if check:
            continue
        else:
            count +=1
            check = True
    else:
        check = False
print(count)