while True:
    try:
        s = input().strip()
        if s[0] == s[-1]:
            print("YES")
        else:
            print("NO")
    except EOFError:
        break
