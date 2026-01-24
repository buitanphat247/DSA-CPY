MAXN = 1000000

prefix_sum = [0.0] * (MAXN + 1)
for i in range(1, MAXN + 1):
    prefix_sum[i] = prefix_sum[i - 1] + 1.0 / (2 * i - 1)

T = int(input())
for _ in range(T):
    n = int(input())
    print(f"{prefix_sum[n]:.5f}")
