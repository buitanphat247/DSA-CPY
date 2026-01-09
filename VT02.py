n = int(input())
set_temp = set(map(int,input().split()))
list_temp = sorted(set_temp)
if len(list_temp)<2:
    print("NOT FOUND")
else:
    print(list_temp[-2])
