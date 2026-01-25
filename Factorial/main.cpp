#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define bl boolean
#define str string
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);

string multiple(string number1, string number2) {
    if (number1 == "0" || number2 == "0") return "0";
    if (number1.length() < number2.length())
        swap(number1, number2);

    int len1 = number1.length();
    int len2 = number2.length();

    string results(len1 + len2, '0');

    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int mul = (number1[i] - '0') * (number2[j] - '0');
            int sum = mul + (results[i + j + 1] - '0');

            results[i + j + 1] = (sum % 10) + '0';
            results[i + j] = (results[i + j] - '0' + sum / 10) + '0';
        }
    }

    int i = 0;
    while (i < results.size() - 1 && results[i] == '0')
        i++;

    return results.substr(i);
}

int main() {
  READ("1");
  ll n;
  cin>>n;
  string tich = "1";
  for(ll i=1;i<=n;i++)
    tich = multiple(tich,to_string(i));
  cout<<tich<<endl;
  return 0;
}
