import math

str_number = str(input())
number_dp = map(int,str_number.split(" "))
solve_max = int(-1e9)
for it in number_dp:
    solve_max = max(solve_max, it)
print(solve_max)
