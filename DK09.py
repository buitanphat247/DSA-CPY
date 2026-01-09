year = int(input())

if year <= 0 or year > 100000:
    print("INVALID")
elif year % 400 == 0 or (year % 4 == 0 and year % 100 != 0):
    print("YES")
else:
    print("NO")
