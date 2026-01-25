n, k = map(int, input().split())
a = list(map(int, input().split()))
dp = [0] * (n + 1)
for i in range(1, n + 1):
    dp[i] = dp[i - 1] + a[i - 1]

left = 1
right = 1
max_len = 0
for right in range(1, n + 1):
    ans_temp = dp[right] - dp[left - 1]
    while left <= right and ans_temp > k:
        max_len = max(max_len, (right - 1) - left + 1)
        left += 1
        ans_temp = dp[right] - dp[left - 1]


print(max_len)
