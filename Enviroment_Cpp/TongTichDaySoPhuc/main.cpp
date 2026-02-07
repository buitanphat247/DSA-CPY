#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// ========== BigInt: số nguyên lớn (lưu chữ số ngược, hàng đơn vị trước) ==========
struct BigInt {
  bool neg;
  string d;  // digits reversed, no leading zeros

  BigInt() : neg(false), d("0") {}
  BigInt(ll x) {
    if (x < 0) neg = true, x = -x;
    else neg = false;
    if (x == 0) d = "0";
    else {
      d = "";
      while (x) d += (char)('0' + x % 10), x /= 10;
    }
  }

  bool isZero() const { return d == "0" || d.empty(); }

  string toStr() const {
    string s = d;
    reverse(s.begin(), s.end());
    if (s.empty() || s == "0") return "0";
    return (neg ? "-" : "") + s;
  }

  // So sánh trị tuyệt đối
  static int cmpAbs(const string& a, const string& b) {
    if (a.size() != b.size()) return a.size() < b.size() ? -1 : 1;
    for (int i = (int)a.size() - 1; i >= 0; i--)
      if (a[i] != b[i]) return a[i] < b[i] ? -1 : 1;
    return 0;
  }
};

BigInt operator+(BigInt A, BigInt B) {
  if (A.neg == B.neg) {
    string a = A.d, b = B.d;
    string r = "";
    int carry = 0, i = 0;
    while (i < (int)a.size() || i < (int)b.size() || carry) {
      int x = (i < (int)a.size() ? a[i] - '0' : 0) + (i < (int)b.size() ? b[i] - '0' : 0) + carry;
      r += (char)('0' + x % 10);
      carry = x / 10;
      i++;
    }
    BigInt C;
    C.neg = A.neg;
    C.d = r;
    return C;
  }
  if (A.neg) swap(A, B);  // giờ A >= 0, B < 0 => kết quả = A - |B|
  int c = BigInt::cmpAbs(A.d, B.d);
  if (c == 0) return BigInt(0);
  string a = A.d, b = B.d;
  if (c < 0) swap(a, b);  // chỉ đổi trị tuyệt đối, a = số lớn hơn
  string r = "";
  int borrow = 0;
  for (int i = 0; i < (int)a.size(); i++) {
    int x = (a[i] - '0') - (i < (int)b.size() ? b[i] - '0' : 0) - borrow;
    borrow = 0;
    if (x < 0) x += 10, borrow = 1;
    r += (char)('0' + x);
  }
  while (r.size() > 1 && r.back() == '0') r.pop_back();
  BigInt C;
  C.neg = (c < 0);  // |A| < |B| => kết quả âm (A + B với B âm)
  C.d = r;
  return C;
}

BigInt operator-(BigInt A, BigInt B) {
  B.neg = !B.neg;
  return A + B;
}

BigInt operator*(BigInt A, ll b) {
  if (b == 0) return BigInt(0);
  bool neg = A.neg ^ (b < 0);
  if (b < 0) b = -b;
  string a = A.d;
  string r = "";
  ll carry = 0;
  for (int i = 0; i < (int)a.size() || carry; i++) {
    ll x = (i < (int)a.size() ? (a[i] - '0') : 0) * b + carry;
    r += (char)('0' + x % 10);
    carry = x / 10;
  }
  while (r.size() > 1 && r.back() == '0') r.pop_back();
  BigInt C;
  C.neg = neg;
  C.d = r;
  return C;
}

// Chuyển số phức thành string: viết liền không khoảng trắng
string soPhucStr(const BigInt& r, const BigInt& im) {
  string rs = r.toStr();
  string is = im.toStr();
  if (im.isZero() || is == "0") return rs;
  if (im.neg) return rs + is + "i";  // is đã có dấu "-"
  return rs + "+" + is + "i";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  if (n <= 0) {
    cout << soPhucStr(BigInt(0), BigInt(0)) << "\n" << soPhucStr(BigInt(1), BigInt(0)) << "\n";
    return 0;
  }

  BigInt sumR(0), sumI(0);
  BigInt prodR(0), prodI(0);

  for (int i = 0; i < n; i++) {
    ll a, b;
    cin >> a >> b;

    sumR = sumR + BigInt(a);
    sumI = sumI + BigInt(b);

    if (i == 0) {
      prodR = BigInt(a);
      prodI = BigInt(b);
    } else {
      BigInt r = prodR * a - prodI * b;
      BigInt im = prodR * b + prodI * a;
      prodR = r;
      prodI = im;
    }
  }

  cout << soPhucStr(sumR, sumI) << "\n" << soPhucStr(prodR, prodI) << "\n";

  return 0;
}
