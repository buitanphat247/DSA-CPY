def multiple(number1, number2):
    if number1 == "0" or number2 == "0":
        return "0"
    if len(number1) < len(number2):
        number1, number2 = number2, number1
    n = len(number1)
    m = len(number2)
    results = [0] * (n + m)
    for i in range(n - 1, -1, -1):
        sum = 0
        for j in range(m - 1, -1, -1):
            mul = int(number1[i]) * int(number2[j])
            sum = mul + results[i + j + 1]
            results[i + j + 1] = sum % 10
            results[i + j] += sum // 10

    pos = 0
    while pos < n + m and results[pos] == 0:
        pos += 1

    numstr = ""
    for i in range(pos, n + m):
        numstr += str(results[i])
    return numstr


n, m = map(int, input().split())
s_n = str(n)
ans_solve = "1"
while m > 0:
    ans_solve = multiple(s_n, ans_solve)
    m -= 1
print(ans_solve)
