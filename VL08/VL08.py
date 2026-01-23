number_a,number_b= map(int,input().split())
sum_solve = 0
for i in range(number_a,number_b+1):
    if i%2==0:
        sum_solve += i
print(sum_solve)