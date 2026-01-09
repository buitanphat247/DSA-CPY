number_array = list(map(int, input().split()))
len_number_array = len(number_array)
found = False
for index in range(len_number_array-1):
    if number_array[-1] == number_array[index]:
        print(index+1, end=" ")
        found = True

if found == False:
    print("-1")