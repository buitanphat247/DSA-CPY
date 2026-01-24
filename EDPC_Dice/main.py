MAX_SIZE = int(1e7)
MODULO = int(1e9 + 7)


def solve_EDPC_DICE(n):
    dp = [0] * (n + 1)
    dp[0] = dp[1] = 1
    for i in range(2, n + 1):
        for j in range(1, 7):
            if i - j >= 0:
                dp[i] = (dp[i] + dp[i - j]) % MODULO
            else:
                break
    return dp[n]


n = int(input())
print(solve_EDPC_DICE(n))
