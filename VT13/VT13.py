n = int(input())
a = list(map(int, input().split()))

best_sum = -10**30
best_i = -1

for i in range(n):
    s = a[i] + a[(i + 1) % n]
    if s > best_sum or (s == best_sum and i > best_i):
        best_sum = s
        best_i = i

print(a[best_i], a[(best_i + 1) % n])
