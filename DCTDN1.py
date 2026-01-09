n = int(input())
dp = list(map(int, input().split()))
dp_temp = [1] * n

for i in range(1, n):
    for j in range(0,i):
        if dp[i] > dp[j]:
            dp_temp[i] = max(dp_temp[i], dp_temp[j] + 1)

print(max(dp_temp))