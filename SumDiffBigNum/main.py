def solve_add_big_number(number1, number2):
    # check if number1 is smaller than number2 => swap them
    # length of number2 is smaller than number1 then swap them
    if len(number1) < len(number2):
        number1, number2 = number2, number1

    # make number1 and number2 have the same length
    while len(number1) != len(number2):
        number2 = "0" + number2

    # reverse number1 and number2 to calculate
    number1 = number1[::-1]
    number2 = number2[::-1]

    # calculate the sum of number1 and number2
    result = ""
    carry = 0
    for i in range(len(number1)):
        sum_val = int(number1[i]) + int(number2[i]) + carry
        result = str(sum_val % 10) + result
        carry = sum_val // 10

    # check carry is not 0 then add to result
    if carry != 0:
        result = str(carry) + result

    print(result)


def solve_diff_big_number(number1, number2):
    check_negative = False
    # đảm bảo number1 >= number2
    if len(number1) < len(number2) or (
        len(number1) == len(number2) and number1 < number2
    ):
        number1, number2 = number2, number1
        check_negative = True

    # làm cho 2 số cùng độ dài
    while len(number2) < len(number1):
        number2 = "0" + number2

    # đảo để trừ từ hàng đơn vị
    number1 = number1[::-1]
    number2 = number2[::-1]

    result = ""
    borrow = 0

    for i in range(len(number1)):
        a = int(number1[i]) - borrow
        b = int(number2[i])

        if a < b:
            a += 10
            borrow = 1
        else:
            borrow = 0

        diff = a - b
        result += str(diff)

    # bỏ các số 0 dư
    while len(result) > 1 and result[-1] == "0":
        result = result[:-1]

    result = result[::-1]
    if check_negative:
        result = "-" + result
    print(result)


def main():
    number1, number2 = input().split()
    solve_add_big_number(number1, number2)
    solve_diff_big_number(number1, number2)


if __name__ == "__main__":
    main()
