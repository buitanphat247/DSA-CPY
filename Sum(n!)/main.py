NMAX = 15
dp = [0] * NMAX
temp = [0] * NMAX

dp[0] = 0
temp[0] = 0
dp[1] = 1
temp[1] = 1

for i in range(2, NMAX):
    dp[i] = i * dp[i - 1]
    temp[i] = temp[i - 1] + dp[i]

print(temp[int(input())])
