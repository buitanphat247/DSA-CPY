m, n = map(int, input().split())
numbers = list(map(int, input().split()))
arr = []
for i in range(m):
    row = []
    for j in range(n):
        row.append(numbers[i * n + j])
    arr.append(row)

for i in range(m):
    print(" ".join(map(str, arr[i])))
