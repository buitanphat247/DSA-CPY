n = int(input())
a = list(map(int, input().split()))
x = int(input())

a.sort(reverse=True)
pos = 0
for i in range(len(a)):
    if a[i] < x:
        pos = i
        break
else:
    pos = len(a)
a.insert(pos, x)

for num in a:
    print(num, end=" ")
print()
