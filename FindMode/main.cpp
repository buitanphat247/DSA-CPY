#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define bl boolean
#define str string
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);
struct number_mode {
  ll key;
  ll value;
};

int main() {
  ll n;
  cin >> n;
  map<ll, ll> number_dict;
  for (ll i = 0; i < n; i++) {
    ll number;
    cin >> number;
    number_dict[number]++;
  }
  number_mode max_mode = {0, (ll)-1e9};
  for (auto it : number_dict) {
    if (it.second > max_mode.value) {
      max_mode.key = it.first;
      max_mode.value = it.second;
    }
  }
  cout << max_mode.key << endl;
  return 0;
}
