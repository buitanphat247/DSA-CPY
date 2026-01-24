n, S = map(int, input().split())
weights = list(map(int, input().split()))


dp = [[0] * (S+10) for _ in range(n+10)]

def solve_knapsack(n, S, weights):
    for i in range(1, n + 1):
        for j in range(1, S + 1):
            dp[i][j] = dp[i - 1][j]
            if j >= weights[i - 1]:
                dp[i][j] = max(
                    dp[i][j],
                    dp[i - 1][j - weights[i - 1]] + weights[i - 1]
                )
    return dp[n][S]

print(solve_knapsack(n, S, weights))
