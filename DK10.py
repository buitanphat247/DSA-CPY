month, year = map(int, input().split())

if month < 1 or month > 12 or year <= 0:
    print("INVALID")
else:
    is_leap = (year % 400 == 0) or (year % 4 == 0 and year % 100 != 0)
    if month == 2:
        if is_leap:
            print(29)
        else:
            print(28)
    elif month in [1, 3, 5, 7, 8, 10, 12]:
        print(31)
    else:
        print(30)
