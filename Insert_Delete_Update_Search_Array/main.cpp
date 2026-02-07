#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);

// Hàm in mảng (in liền không có khoảng trắng theo ví dụ)
void printArray(vector<ll> &arr) {
  for (ll i = 0; i < arr.size(); i++) {
    cout << arr[i];
  }
  cout << endl;
}

int main() {
  READ("1");

  ll n;
  cin >> n;

  // Đọc mảng ban đầu
  // Có thể đọc từng số nguyên hoặc từng chữ số từ một số nguyên
  vector<ll> arr;
  string line;
  cin.ignore(); // Bỏ qua ký tự xuống dòng
  getline(cin, line);

  // Nếu dòng có khoảng trắng, đọc từng số
  // Nếu không có khoảng trắng, đọc từng chữ số
  if (line.find(' ') != string::npos) {
    // Có khoảng trắng: đọc từng số nguyên
    stringstream ss(line);
    ll num;
    while (ss >> num) {
      arr.pb(num);
    }
  } else {
    // Không có khoảng trắng: đọc từng chữ số
    for (ll i = 0; i < line.length() && i < n; i++) {
      arr.pb(line[i] - '0');
    }
  }

  // Thao tác 1: Thêm phần tử C vào vị trí B
  ll B, C;
  cin >> B >> C;
  arr.insert(arr.begin() + B, C);
  printArray(arr);

  // Thao tác 2: Sửa phần tử tại vị trí D thành E
  ll D, E;
  cin >> D >> E;
  arr[D] = E;
  printArray(arr);

  // Thao tác 3: Xóa phần tử tại vị trí F
  ll F;
  cin >> F;
  arr.erase(arr.begin() + F);
  printArray(arr);

  // Thao tác 4: Tìm vị trí của X
  ll X;
  cin >> X;
  ll pos = -1;
  for (ll i = 0; i < arr.size(); i++) {
    if (arr[i] == X) {
      pos = i;
      break;
    }
  }
  cout << pos << endl;

  return 0;
}
