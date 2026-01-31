#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define bl boolean
#define str string
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);

bool isLeapYear(ll year) {
  return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

ll daysInMonth(ll month, ll year) {
  if (month == 2) {
    return isLeapYear(year) ? 29 : 28;
  }
  if (month == 4 || month == 6 || month == 9 || month == 11) {
    return 30;
  }
  return 31;
}

bool isValidDate(ll d, ll m, ll y) {
  if (m < 1 || m > 12)
    return false;
  if (d < 1 || d > daysInMonth(m, y))
    return false;
  return true;
}

int main() {
  READ("1");
  ll d, m, y;
  cin >> d >> m >> y;
  if (!isValidDate(d, m, y)) {
    cout << -1 << endl;
    return 0;
  }
  ll nextD = d + 1;
  ll nextM = m;
  ll nextY = y;
  if (nextD > daysInMonth(nextM, nextY)) {
    nextD = 1;
    nextM++;
    if (nextM > 12) {
      nextM = 1;
      nextY++;
    }
  }
  cout << nextD << " " << nextM << " " << nextY << endl;
  return 0;
}
