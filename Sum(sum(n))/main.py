NMAX = 1e7
dp = [0] * NMAX
temp = [0] * NMAX

for i in range(1, NMAX):
    dp[i] = i + dp[i - 1]
    temp[i] = temp[i - 1] + dp[i]

print(temp[int(input())])
