number_string = str(input())
number_a, number_b = map(int,number_string.split(" "))
print(number_a+number_b)
print(number_a-number_b)
print(number_a*number_b)
if number_b == 0:
  print("ERROR")
else:
  print(f"{round(number_a/number_b,2):.2f}")
