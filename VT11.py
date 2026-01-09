import math
n = input()
dp = list(map(int,input().split()))

def sort_list(array : list):
    len_array = len(array)
    for i in range(1, len_array - 2):
        for j in range(i + 1, len_array - 2):
            if array[j] < array[i]:
                temp = array[i]
                array[i] = array[j]
                array[j] = temp
    return array

len_dp = len(dp)
if len_dp < 2:
    print(*dp)
else:
    new_array = dp[1:-1]
    new_array = sorted(new_array)
    result = [dp[0]] + new_array + [dp[-1]]
    print(*result)

