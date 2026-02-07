#include <bits/stdc++.h>
using namespace std;

struct SoPhuc {
  int thuc;
  int ao;
};

SoPhuc tong(SoPhuc a, SoPhuc b) { return {a.thuc + b.thuc, a.ao + b.ao}; }

SoPhuc hieu(SoPhuc a, SoPhuc b) { return {a.thuc - b.thuc, a.ao - b.ao}; }

SoPhuc tich(SoPhuc a, SoPhuc b) {
  return {a.thuc * b.thuc - a.ao * b.ao, a.thuc * b.ao + a.ao * b.thuc};
}

int main() {
  SoPhuc a, b;
  cin >> a.thuc >> a.ao;
  cin >> b.thuc >> b.ao;

  SoPhuc s = tong(a, b);
  SoPhuc h = hieu(a, b);
  SoPhuc t = tich(a, b);

  cout << s.thuc << " " << s.ao << endl;
  cout << h.thuc << " " << h.ao << endl;
  cout << t.thuc << " " << t.ao << endl;

  return 0;
}
