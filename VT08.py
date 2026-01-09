n = int(input())
A = list(map(int, input().split()))

B = A.copy()

for i in range(n):
    if i % 2 == 1:
        left = A[i-1] if i-1 >= 0 else 0
        right = A[i+1] if i+1 < n else 0
        B[i] = A[i] + abs(left - right)

print(*B)
