char_one,char_two = input().split()
for i in range(ord(char_one),ord(char_two)+1):
    print(chr(i).upper(),end=' ')