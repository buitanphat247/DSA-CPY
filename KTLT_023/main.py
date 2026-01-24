n, k = map(int, input().split())
dp = list(map(int, input().split()))
left = 0
answer, sum = 0, 0

for right in range(n):
    sum += dp[right]
    while sum > k:
        sum -= dp[left]
        left += 1
        if sum <= k:
            break
    answer += right - left + 1

print(answer)
