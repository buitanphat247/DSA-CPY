#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define bl boolean
#define str string
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);
const ll MODULO = (ll)1e9 + 7;
const ll MAX_SIZE = (ll)1e7;

void solve_add_big_number(string number1, string number2) {

  //   check if number1 is smaller than number2 => swap them
  // length of number2 is smaller than number1 then swap them
  if (number1.length() < number2.length())
    swap(number1, number2);

  //   make number1 and number2 have the same length
  while (number1.length() != number2.length())
    number2 = "0" + number2;

  // reverse number1 and number2 to calculate
  reverse(number1.begin(), number1.end());
  reverse(number2.begin(), number2.end());

  // calculate the sum of number1 and number2
  string result = "";
  int carry = 0;
  for (int i = 0; i < number1.length(); i++) {
    int sum = (number1[i] - '0') + (number2[i] - '0') + carry;
    result = char(sum % 10 + '0') + result;
    carry = sum / 10;
  }

  // check carry is not 0 then add to result
  if (carry != 0)
    result = char(carry + '0') + result;

  // reverse result to get the correct result
  cout << result << endl;
}

void solve_diff_big_number(string number1, string number2) {
  bool check_negative = false;
  // đảm bảo number1 >= number2
  if (number1.length() < number2.length() ||
      (number1.length() == number2.length() && number1 < number2))
    swap(number1, number2), check_negative = true;

  // làm cho 2 số cùng độ dài
  while (number2.length() < number1.length())
    number2 = "0" + number2;

  // đảo để trừ từ hàng đơn vị
  reverse(number1.begin(), number1.end());
  reverse(number2.begin(), number2.end());

  string result = "";
  int borrow = 0;

  for (int i = 0; i < number1.length(); i++) {
    int a = (number1[i] - '0') - borrow;
    int b = (number2[i] - '0');

    if (a < b) {
      a += 10;
      borrow = 1;
    } else {
      borrow = 0;
    }

    int diff = a - b;
    result.push_back(char(diff + '0'));
  }

  // bỏ các số 0 dư
  while (result.size() > 1 && result.back() == '0')
    result.pop_back();

  reverse(result.begin(), result.end());
  if (check_negative)
    result = "-" + result;
  cout << result << endl;
}

int main() {
  string number1, number2;
  cin >> number1 >> number2;
  solve_add_big_number(number1, number2);
  solve_diff_big_number(number1, number2);

  return 0;
}
