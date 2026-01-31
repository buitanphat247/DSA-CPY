import bisect

n, k = map(int, input().split())
dp = list(map(int, input().split()))

position = bisect.bitsect_left(dp, k)
if position < len(dp) and dp[position] == k:
    print(position)
else:
    print(-1)
