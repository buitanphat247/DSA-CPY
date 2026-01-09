number_a,number_b =map(int,input().split())
found = False
for i in range(number_b-1,number_a,-1):
    if i % 3 == 0:
        found = True
        print(i, end=" ")

if not found:
    print("NOT FOUND")