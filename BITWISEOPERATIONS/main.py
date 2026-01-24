MASK = (1 << 32) - 1
n = int(input())
while n != 0:
    n -= 1
    a, config, b = input().split()
    a = int(a)
    b = int(b)
    if config == "AND":
        print(a & b)
    elif config == "OR":
        print(a | b)
    elif config == "XOR":
        print(a ^ b)
    elif config == "NOT":
        print((~a & MASK) ^ (~b & MASK) & MASK)
    elif config == "LEFT":
        print(a << b & MASK)
    elif config == "RIGHT":
        print(a >> b & MASK)
