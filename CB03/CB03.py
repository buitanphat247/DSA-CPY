number_string = str(input())
number = number_string.split(" ")
solve = 0
for item in number:
  solve += int(item)
print(solve)
