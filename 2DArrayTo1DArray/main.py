m, n = map(int, input().split())
arr = []
for i in range(m):
    row = list(map(int, input().split()))
    arr.append(row)

for i in range(m):
    for j in range(n):
        print(arr[i][j], end="")
print()
