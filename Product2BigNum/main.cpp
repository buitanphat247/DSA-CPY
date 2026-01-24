#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define bl boolean
#define str string
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);

int main() {
  READ("1");

  string number_one, number_two;
  cin >> number_one >> number_two;
  int len_number_one = number_one.length();
  int len_number_two = number_two.length();
  vector<int> results(len_number_one + len_number_two, 0);
  int sum = 0;
  for (ll i = len_number_one - 1; i >= 0; i--) {
    sum = 0;
    for (ll j = len_number_two - 1; j >= 0; j--) {
      int mul = (number_one[i] - '0') * (number_two[j] - '0');
      sum = mul + results[i + j + 1];
      results[i + j + 1] = sum % 10;
      results[i + j] += sum / 10;
    }
  }
  int i = 0;
  while (i < len_number_one + len_number_two - 1 && results[i] == 0)
    i++;
  for (; i < len_number_one + len_number_two; i++)
    cout << results[i];
}
