T = int(input())

queries = []
for _ in range(T):
    queries.append(int(input()))

max_n = max(queries)

H = [0.0] * (max_n + 1)
for i in range(1, max_n + 1):
    H[i] = H[i-1] + 1.0 / i

for n in queries:
    print("{:.5f}".format(H[n]))
