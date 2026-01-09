a, op, b = input().split()

a = float(a)
b = float(b)

if op == '+':
    result = a + b
    print(f"{result:.2f}")

elif op == '-':
    result = a - b
    print(f"{result:.2f}")

elif op == '*':
    result = a * b
    print(f"{result:.2f}")

elif op == '/':
    if b == 0:
        print("Math Error")
    else:
        result = a / b
        print(f"{result:.2f}")
