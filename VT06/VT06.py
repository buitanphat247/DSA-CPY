number_n = int(input())
number_array = list(map(int,input().split()))
s_solve, count = 0, 0
for item in number_array:
    if item % 2 != 0:
        s_solve += item
        count += 1
print(f"{s_solve/count:.4f}")