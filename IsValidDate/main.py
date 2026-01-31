from datetime import datetime, timedelta

d, m, y = map(int, input().split())

try:
    date = datetime(y, m, d)
    next_date = date + timedelta(days=1)
    print(f"{next_date.day} {next_date.month} {next_date.year}")
except ValueError:
    print(-1)
