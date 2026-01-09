n = int(input())
a = list(map(int, input().split()))
a = sorted(a)

print(max(a[-1]*a[-2],a[0]*a[1]))
