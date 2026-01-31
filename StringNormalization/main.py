s = input().strip()
words = s.split()
if words:
    result = words[0].capitalize()
    for word in words[1:]:
        result += " " + word
    print(result)
else:
    print("")
