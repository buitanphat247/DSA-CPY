// Thư viện chuẩn C++ bao gồm tất cả các thư viện cần thiết
#include <bits/stdc++.h>
using namespace std;

// Định nghĩa macro để viết code ngắn gọn hơn
#define ll long long // Định nghĩa ll là kiểu long long
#define pb push_back // Định nghĩa pb là hàm push_back

// Macro để đọc/ghi file: đọc từ name.inp và ghi ra name.out
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);

// Hằng số giới hạn kích thước tối đa (không được sử dụng trong code này)
const ll nmax = 1e6 + 5;

// Biến toàn cục: n là số hàng, m là số cột của ma trận
ll n, m;

// Mảng hướng di chuyển: phải, trái, xuống, lên (4 hướng trong ma trận 2D)
int dx[] = {0, 0, 1, -1}; // Thay đổi tọa độ x
int dy[] = {1, -1, 0, 0}; // Thay đổi tọa độ y

// Khai báo các hàm
void create_graph(vector<vector<ll>> &dp, ll n, ll m); // Tạo ma trận từ input
void solve(vector<vector<ll>> &dp, ll n, ll m); // Hàm giải quyết bài toán
void dfs(vector<vector<ll>> &dp, ll x,
         ll y); // Thuật toán DFS (Depth-First Search)
void bfs(vector<vector<ll>> &dp, ll x,
         ll y); // Thuật toán BFS (Breadth-First Search)

int main() {
  // Mở file input "1.inp" để đọc và file output "1.out" để ghi
  READ("1");

  // Đọc kích thước ma trận: n hàng và m cột
  cin >> n >> m;

  // Khởi tạo ma trận 2 chiều kích thước n x m
  vector<vector<ll>> dp(n, vector<ll>(m));

  // Đọc dữ liệu vào ma trận từ input
  create_graph(dp, n, m);

  // Giải quyết bài toán: tìm và duyệt các thành phần liên thông
  solve(dp, n, m);
}

// Hàm đọc dữ liệu vào ma trận từ input
// dp: ma trận 2 chiều được truyền bằng tham chiếu
// n: số hàng của ma trận
// m: số cột của ma trận
void create_graph(vector<vector<ll>> &dp, ll n, ll m) {
  // Duyệt qua từng phần tử trong ma trận
  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < m; j++) {
      // Đọc giá trị từ input vào vị trí [i][j]
      cin >> dp[i][j];
    }
  }
}
// Thuật toán DFS (Depth-First Search) - Duyệt theo chiều sâu
// Duyệt tất cả các ô liên thông với ô (x, y) có giá trị 1
// dp: ma trận 2 chiều
// x, y: tọa độ điểm bắt đầu duyệt
void dfs(vector<vector<ll>> &dp, ll x, ll y) {
  // Đánh dấu ô hiện tại đã được thăm (đổi giá trị thành 0)
  dp[x][y] = 0;

  // In ra tọa độ ô hiện tại (chuyển từ index 0-based sang 1-based)
  cout << x + 1 << " " << y + 1 << endl;

  // Duyệt 4 hướng: phải, trái, xuống, lên
  for (ll i = 0; i < 4; i++) {
    // Tính tọa độ ô kế tiếp theo hướng thứ i
    ll nx = x + dx[i];
    ll ny = y + dy[i];

    // Kiểm tra: ô mới phải nằm trong phạm vi ma trận và có giá trị 1 (chưa
    // thăm)
    if (nx >= 0 && nx < n && ny >= 0 && ny < m && dp[nx][ny] == 1) {
      // Đệ quy duyệt tiếp ô kế tiếp
      dfs(dp, nx, ny);
    }
  }
}

// Thuật toán BFS (Breadth-First Search) - Duyệt theo chiều rộng
// Duyệt tất cả các ô liên thông với ô (x, y) có giá trị 1
// dp: ma trận 2 chiều
// x, y: tọa độ điểm bắt đầu duyệt
// Lưu ý: Hàm này có lỗi logic - thiếu phần pop và cập nhật tọa độ từ queue
void bfs(vector<vector<ll>> &dp, ll x, ll y) {
  // Khởi tạo hàng đợi (queue) để lưu các ô cần duyệt
  queue<pair<ll, ll>> q;

  // Thêm ô bắt đầu vào hàng đợi
  q.push({x, y});

  // Đánh dấu ô bắt đầu đã được thăm
  dp[x][y] = 0;

  // Duyệt cho đến khi hàng đợi rỗng
  while (!q.empty()) {
    // Duyệt 4 hướng từ ô hiện tại
    for (ll i = 0; i < 4; i++) {
      // Tính tọa độ ô kế tiếp theo hướng thứ i
      ll nx = x + dx[i];
      ll ny = y + dy[i];

      // Kiểm tra: ô mới phải nằm trong phạm vi ma trận và có giá trị 1 (chưa
      // thăm)
      if (nx >= 0 && nx < n && ny >= 0 && ny < m && dp[nx][ny] == 1) {
        // Thêm ô mới vào hàng đợi để duyệt sau
        q.push({nx, ny});
        // Đánh dấu ô mới đã được thăm
        dp[nx][ny] = 0;
      }
    }
    // LƯU Ý: Thiếu phần pop phần tử từ queue và cập nhật x, y
    // Cần thêm: x = q.front().first; y = q.front().second; q.pop();
  }
}

// Hàm giải quyết bài toán: tìm và duyệt tất cả các thành phần liên thông
// Mỗi thành phần liên thông là một nhóm các ô có giá trị 1 liền kề nhau
// dp: ma trận 2 chiều
// n: số hàng của ma trận
// m: số cột của ma trận
void solve(vector<vector<ll>> &dp, ll n, ll m) {
  // Duyệt qua tất cả các ô trong ma trận
  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < m; j++) {
      // Nếu gặp ô có giá trị 1 (chưa được duyệt), đây là điểm bắt đầu của một
      // thành phần liên thông mới
      if (dp[i][j] == 1) {
        // In nhãn và duyệt thành phần liên thông bằng DFS
        cout << "DFS: ";
        dfs(dp, i, j);
      }
      // Xuống dòng sau mỗi hàng (có thể không cần thiết)
      cout << endl;
    }
  }
}