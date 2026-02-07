#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);

string reverseWord(string word) {
  reverse(word.begin(), word.end());
  return word;
}

int main() {
  READ("1");
  string line;
  getline(cin, line);

  stringstream ss(line);
  string word;
  vector<string> words;

  while (ss >> word) {
    words.pb(reverseWord(word));
  }

  for (int i = 0; i < words.size(); i++) {
    cout << words[i];
    if (i < words.size() - 1) {
      cout << " ";
    }
  }
  cout << endl;

  return 0;
}
