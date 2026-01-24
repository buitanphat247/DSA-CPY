n, k = map(int, input().split())
dp = [0] + list(map(int, input().split()))
ans = 0


def solve_backtrack(index, sum, choose):
    global dp, n, k, ans
    if index > n:
        if choose > 0 and sum == k:
            ans += 1
        return
    solve_backtrack(index + 1, sum + dp[index], choose + 1)
    solve_backtrack(index + 1, sum, choose)


solve_backtrack(1, 0, 0)
print(ans)
