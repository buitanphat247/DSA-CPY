#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);

ll m, n;
vector<string> result;

void generate(int pos, string current, int openCount, int closeCount,
              int currentDepth, int maxDepth) {
  if (closeCount > openCount) {
    return;
  }

  if (maxDepth > n) {
    return;
  }

  if (openCount > m / 2) {
    return;
  }

  if (pos == m) {
    if (openCount == closeCount && maxDepth == n) {
      result.pb(current);
    }
    return;
  }

  int remaining = m - pos;
  if (openCount + remaining < closeCount) {
    return;
  }

  int newDepth1 = currentDepth + 1;
  generate(pos + 1, current + "(", openCount + 1, closeCount, newDepth1,
           max(maxDepth, newDepth1));

  if (currentDepth > 0) {
    int newDepth2 = currentDepth - 1;
    generate(pos + 1, current + ")", openCount, closeCount + 1, newDepth2,
             maxDepth);
  }
}

int main() {
  READ("1");
  cin >> m >> n;

  generate(0, "", 0, 0, 0, 0);

  sort(result.begin(), result.end());

  for (string s : result) {
    cout << s << endl;
  }

  return 0;
}
