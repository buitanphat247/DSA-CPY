n = int(input())
a = []
for i in range(n):
    s = input().strip()
    row = [int(s[j]) for j in range(n)]
    a.append(row)

dx = [-1, -1, -1, 0, 0, 1, 1, 1]
dy = [-1, 0, 1, -1, 1, -1, 0, 1]

result = [[0] * n for _ in range(n)]

for i in range(n):
    for j in range(n):
        if a[i][j] == 1:
            result[i][j] = -1
        else:
            count = 0
            for k in range(8):
                ni = i + dx[k]
                nj = j + dy[k]
                if 0 <= ni < n and 0 <= nj < n and a[ni][nj] == 1:
                    count += 1
            result[i][j] = count

for i in range(n):
    print(" ".join(map(str, result[i])))
