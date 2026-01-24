#include <bits/stdc++.h>
using namespace std;
#define READ(filename) freopen(filename, "r", stdin)
#define WRITE(filename) freopen(filename, "w", stdout)
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
int main() {
  READ("BITWISEOPERATIONS.INP");
  WRITE("BITWISEOPERATIONS.OUT");
  int n;
  cin >> n;
  while (n--) {
    uint32_t a, b;
    string config = "";
    cin >> a >> config >> b;
    if (config == "AND") {
      cout << (a & b) << '\n';
    } else if (config == "OR") {
      cout << (a | b) << '\n';
    } else if (config == "XOR") {
      cout << (a ^ b) << '\n';
    } else if (config == "NOT") {
      cout << ((~a) ^ (~b)) << '\n';
    } else if (config == "LEFT") {
      cout << (a << b) << '\n';
    } else if (config == "RIGHT") {
      cout << (a >> b) << '\n';
    }
  }
  return 0;
}