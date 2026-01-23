import math
MAXN = int(1e6)
dp_array = [True] * (MAXN + 10)

def sang_snt():
    global dp_array
    dp_array[0]=dp_array[1]=False
    for index_i in range(2,int(math.sqrt(MAXN))+1):
        if dp_array[index_i]:
            for index_j in range(int(pow(index_i,2)),int(MAXN)+1,index_i):
                dp_array[index_j] = False

sang_snt()
number_n = int(input())
number_array = list(set(map(int,input().split())))
number_array.sort()
for item in number_array:
    if dp_array[abs(item)]:
        print(abs(item), end=" ")