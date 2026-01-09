A, B, C, D = map(int, input().split())

if max(A, C) <= min(B, D):
    print("YES")
else:
    print("NO")
