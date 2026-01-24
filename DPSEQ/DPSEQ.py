n,k = map(int,input().split())

dp_array = list[int](map(int,input().split()))
dp_result = list[int]([int(-1e9)]*n)

dp_result[0] = dp_array[0]
dp_result[1]= max(dp_array[1],dp_result[0]+dp_array[1])

for i in range(1,n):
    back_step = 0
    if i-k < 0:
        back_step = 0
    else:
        back_step = i-k
        
    for j in range(i-1,back_step-1,-1):
        dp_result[i] = max(dp_result[j]+dp_array[i],dp_result[i])

print(dp_result[n-1])