from bisect import bisect_left

n = int(input())
x = list(map(int, input().split()))
dp = []

for i in range(n):
    pos = bisect_left(dp, x[i])
    if pos == len(dp):
        dp.append(x[i])
    else:
        dp[pos] = x[i]

print(len(dp))
