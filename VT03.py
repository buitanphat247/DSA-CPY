n = int(input())
number_list = list(map(int, input().split()))
max_number ={
    "index": 0,
    "value": int(-1e18),
}
for index,item in enumerate(number_list):
    if item >= max_number["value"]:
        max_number["index"] = index
        max_number["value"] = item

print(max_number["index"])