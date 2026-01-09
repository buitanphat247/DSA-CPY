a = list(map(int, input().split()))

negatives = []

for x in a:
    if x == 0:
        break
    if x < 0:
        negatives.append(x)

if negatives:
    print(*negatives)
else:
    print("NOT FOUND")
