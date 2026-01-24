n,S=map(int,input().split())

weights = list()
values = list()
for _ in range(n):
    w,v= map(int,input().split())
    weights.append(w)
    values.append(v)

dp = [[0]*(S+1) for _ in range(n)]

for i in range(n):
    for j in range(S+1):
        if i > 0:
            dp[i][j] = dp[i-1][j]
        if j >= weights[i]:
            if i > 0:
                dp[i][j] = max(dp[i][j], dp[i-1][j-weights[i]] + values[i])
            else:
                dp[i][j] = max(dp[i][j], values[i])

print(dp[n-1][S])
        