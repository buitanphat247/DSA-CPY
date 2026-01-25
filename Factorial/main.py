def multiple(number1, number2):
    if number1 == "0" or number2 == "0":
        return "0"
    if len(number1) < len(number2):
        a, b = b, a(number1, number2)

    len1 = len(number1)
    len2 = len(number2)
    results = ["0"] * (len1 + len2)
    for i in range(len1 - 1, -1, -1):
        for j in range(len2 - 1, -1, -1):
            mul = int(number1[i]) * int(number2[j])
            sum = mul + int(results[i + j + 1])
            results[i + j + 1] = str(sum % 10)
            results[i + j] = str(int(results[i + j]) + sum // 10)
    pos = 0
    while pos < len(results) - 1 and results[pos] == "0":
        pos += 1
    return "".join(results[pos:])


n = int(input())
tich = "1"
for i in range(1, n + 1):
    tich = multiple(tich, str(i))
print(tich)
