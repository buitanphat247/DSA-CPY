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
  string s;
  getline(cin, s);
  ll lowercase = 0, uppercase = 0, digit = 0, other = 0;
  for (char c : s) {
    if (c >= 'a' && c <= 'z')
      lowercase++;
    else if (c >= 'A' && c <= 'Z')
      uppercase++;
    else if (c >= '0' && c <= '9')
      digit++;
    else
      other++;
  }
  cout << lowercase << " " << uppercase << " " << digit << " " << other
       << endl;
  return 0;
}
