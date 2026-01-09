number_n = int(input())
number_list = list(map(int,input().split()))
number_list.sort(reverse=True)
print(*number_list)
