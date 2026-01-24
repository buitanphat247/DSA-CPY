s = str(input())
s += "d"
results = 0
check = False
pos = 0
for i in range(len(s)):
    if not check and s[i].isdigit():
        check = True
        pos = i
    if check and not s[i].isdigit():
        string_number = s[pos:i]
        results += int(string_number)
        check = False
        pos = i
print(results)
