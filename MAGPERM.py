n, k = map(int, input().split())

if k == 0:
    print(*range(1, n+1))
elif n % (2*k) != 0:
    print(-1)
else:
    res = []
    for i in range(1, n+1, 2*k):
        for j in range(i+k, i+2*k):
            res.append(j)
        for j in range(i, i+k):
            res.append(j)
    print(*res)
