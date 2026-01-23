number_n, number_need_count = map(int, input().split())
number_need_count = abs(int(number_need_count))
number_array = list(map(int,input().split()))
number_array = [abs(x) for x in number_array]
number_dict = {}
for item in number_array:
    if item not in number_dict:
        number_dict[item] = 1
    else:
        number_dict[item] += 1

if number_need_count not in number_dict:
    print(0)
else:
    print(number_dict.get(number_need_count))
