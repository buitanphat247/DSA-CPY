n = int(input())
number_list = list(map(int, input().split()))
number_dict = {
    "key": 0,
    "value": int(-1e9),
}

list_dict = {}
for item in number_list:
    list_dict[item] = list_dict.get(item, 0) + 1

for key, value in list_dict.items():
    if value > number_dict["value"]:
        number_dict["key"] = key
        number_dict["value"] = value

print(number_dict["key"])