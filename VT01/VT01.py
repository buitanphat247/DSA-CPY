n = int(input())
solve = int(-1e9)
list_temp = map(int,input().split())
for item in list_temp:
    solve = max(solve,item)
print(solve)
