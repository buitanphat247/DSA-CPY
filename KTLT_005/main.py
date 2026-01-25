n, m, k = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
a.sort()
b.sort()

answer_count, j = 0, 0

for i in range(n):
    while j < m and b[j] < a[i] - k:
        j += 1
    if j < m and b[j] <= a[i] + k:
        answer_count += 1
        j += 1
        
print(answer_count)
