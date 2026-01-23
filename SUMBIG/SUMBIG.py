a = input().strip()
b = input().strip()

i = len(a) - 1
j = len(b) - 1
carry = 0
res = []

while i >= 0 or j >= 0 or carry:
    x = int(a[i]) if i >= 0 else 0
    y = int(b[j]) if j >= 0 else 0

    s = x + y + carry
    res.append(str(s % 10))
    carry = s // 10

    i -= 1
    j -= 1

print("".join(reversed(res)))
