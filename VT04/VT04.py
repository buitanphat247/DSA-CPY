number_n, number_need_find = input().split()
number_need_find = abs(int(number_need_find))
number_array = list(map(int,input().split()))
number_array = [abs(x) for x in number_array]
if number_need_find in number_array:
    print("YES")
else:
    print("NO")