def sovlegiaithua(end_index: int):
    if end_index < 0:
        return None
    tich = 1
    for i in range(1, end_index + 1):
        tich *= i
    return tich

n,k = map(int,input().split())
print(f"{round(sovlegiaithua(n)/(sovlegiaithua(k)*sovlegiaithua(n-k)))}")