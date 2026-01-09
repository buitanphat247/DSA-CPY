a, b, c, d, e, f = map(int, input().split())

D  = a * e - b * d
Dx = c * e - b * f
Dy = a * f - c * d

if D != 0:
    x = Dx / D
    y = Dy / D
    print(f"{x:.2f} {y:.2f}")
else:
    if Dx == 0 and Dy == 0:
        print("VOSONGHIEM")
    else:
        print("VONGHIEM")
