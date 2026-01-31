s = input()
lowercase = 0
uppercase = 0
digit = 0
other = 0

for c in s:
    if c.islower():
        lowercase += 1
    elif c.isupper():
        uppercase += 1
    elif c.isdigit():
        digit += 1
    else:
        other += 1

print(f"{lowercase} {uppercase} {digit} {other}")
