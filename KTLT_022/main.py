n, k = map(int, input().split())
dp = [0] + list(map(int, input().split()))

sliding_window = [0] * (n + 1)


def solve_sliding_window():
    for i in range(1, n + 1):
        sliding_window[i] = sliding_window[i - 1] + dp[i]

    left = 1
    min_len = 1e9
    for right in range(1, n + 1):
        ans_temp = sliding_window[right] - sliding_window[left - 1]
        while left <= right and ans_temp >= k:
            min_len = min(min_len, right - left + 1)
            left += 1
            ans_temp = sliding_window[right] - sliding_window[left - 1]
    return min_len if min_len != 1e9 else -1


print(solve_sliding_window())
