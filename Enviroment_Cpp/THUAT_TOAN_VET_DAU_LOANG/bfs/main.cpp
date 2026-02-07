/*
 * ============================================================================
 * THUẬT TOÁN BFS (BREADTH-FIRST SEARCH) - DUYỆT THEO CHIỀU RỘNG
 * ============================================================================
 *
 * Mô tả thuật toán:
 *   - BFS là thuật toán duyệt đồ thị theo chiều rộng
 *   - Bắt đầu từ một đỉnh, duyệt tất cả các đỉnh kề trước khi đi sâu hơn
 *   - Sử dụng cấu trúc dữ liệu Queue (hàng đợi) để lưu các đỉnh cần duyệt
 *   - Nguyên tắc: Vào trước ra trước (FIFO - First In First Out)
 *
 * Input Format:
 *   - Dòng 1: n m
 *     + n: số lượng đỉnh của đồ thị (1 <= n <= 10^6)
 *     + m: số lượng cạnh của đồ thị (1 <= m <= 10^6)
 *   - m dòng tiếp theo, mỗi dòng chứa: u v
 *     + u, v: hai đỉnh được nối bởi một cạnh (đồ thị vô hướng)
 *
 * Output Format:
 *   - In ra thứ tự duyệt các đỉnh từ đỉnh 1
 *   - Các đỉnh được in cách nhau bởi một khoảng trắng
 *
 * Độ phức tạp:
 *   - Thời gian: O(V + E) với V là số đỉnh, E là số cạnh
 *   - Không gian: O(V + E) để lưu đồ thị và O(V) cho mảng visited
 *
 * Ví dụ:
 *   Input:
 *     5 4
 *     1 2
 *     1 3
 *     2 4
 *     3 5
 *   Output:
 *     1 2 3 4 5
 * ============================================================================
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

// Macro để đọc/ghi file tự động
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);

// Hằng số: số lượng đỉnh tối đa của đồ thị
const ll nmax = 1e6 + 5;

// Khai báo các hàm sử dụng trong chương trình
// Hàm tạo đồ thị từ danh sách cạnh
// Tham số: dp - danh sách kề, n - số đỉnh, m - số cạnh
void create_graph(vector<vector<ll>> &dp, ll n, ll m);

// Hàm thực hiện thuật toán BFS
// Tham số: dp - danh sách kề, point_start - đỉnh bắt đầu, vis - mảng đánh dấu
// đã thăm
void bfs(vector<vector<ll>> &dp, ll point_start, vector<ll> &vis);

// ============================================================================
// HÀM MAIN - ĐIỂM BẮT ĐẦU CỦA CHƯƠNG TRÌNH
// ============================================================================
int main() {
  // Mở file input "1.inp" để đọc và file output "1.out" để ghi
  READ("1");

  // Đọc số lượng đỉnh (n) và số lượng cạnh (m) từ file input
  ll n, m;
  cin >> n >> m;

  // Khởi tạo danh sách kề để lưu trữ đồ thị
  // dp[i] chứa danh sách các đỉnh kề với đỉnh i
  vector<vector<ll>> dp(nmax);

  // Khởi tạo mảng đánh dấu các đỉnh đã được thăm
  // vis[i] = true nếu đỉnh i đã được duyệt, false nếu chưa
  vector<ll> vis(nmax, false);

  // Xây dựng đồ thị từ danh sách cạnh đọc được
  create_graph(dp, n, m);

  // Thực hiện thuật toán BFS bắt đầu từ đỉnh 1
  // Kết quả sẽ được in ra màn hình (hoặc file output)
  bfs(dp, 1, vis);

  return 0;
}

// ============================================================================
// HÀM TẠO ĐỒ THỊ TỪ DANH SÁCH CẠNH
// ============================================================================
// Mục đích: Xây dựng biểu diễn đồ thị dưới dạng danh sách kề
//
// Tham số:
//   - dp: danh sách kề (sẽ được cập nhật)
//   - n: số lượng đỉnh của đồ thị
//   - m: số lượng cạnh của đồ thị
//
// Cách hoạt động:
//   - Đọc m cạnh từ input
//   - Với mỗi cạnh (u, v), thêm v vào danh sách kề của u và ngược lại
//   - Kết quả: đồ thị vô hướng được biểu diễn bằng danh sách kề
// ============================================================================
void create_graph(vector<vector<ll>> &dp, ll n, ll m) {
  // Đọc từng cạnh của đồ thị
  for (ll i = 0; i < m; i++) {
    // Đọc hai đỉnh u và v được nối bởi một cạnh
    ll u, v;
    cin >> u >> v;

    // Vì đồ thị là vô hướng, nên:
    // - Thêm v vào danh sách kề của u
    dp[u].pb(v);
    // - Thêm u vào danh sách kề của v
    dp[v].pb(u);
  }
}

// ============================================================================
// HÀM BFS - THUẬT TOÁN DUYỆT THEO CHIỀU RỘNG
// ============================================================================
// Mục đích: Duyệt tất cả các đỉnh của đồ thị bắt đầu từ đỉnh point_start
//           theo thứ tự từ gần đến xa (theo chiều rộng)
//
// Tham số:
//   - dp: danh sách kề của đồ thị
//   - point_start: đỉnh bắt đầu duyệt
//   - vis: mảng đánh dấu các đỉnh đã được thăm (sẽ được cập nhật)
//
// Cách hoạt động của BFS:
//   1. Khởi tạo: Đưa đỉnh bắt đầu vào queue và đánh dấu đã thăm
//   2. Lặp lại cho đến khi queue rỗng:
//      a. Lấy đỉnh ở đầu queue ra (đỉnh gần nhất chưa được xử lý)
//      b. In đỉnh đó ra (hoặc xử lý đỉnh đó)
//      c. Duyệt tất cả các đỉnh kề với đỉnh hiện tại
//      d. Với mỗi đỉnh kề chưa được thăm:
//         - Đưa vào queue để xử lý sau
//         - Đánh dấu đã thăm để tránh duyệt lại
//
// Đặc điểm của BFS:
//   - Đảm bảo duyệt các đỉnh theo thứ tự khoảng cách từ đỉnh bắt đầu
//   - Đỉnh gần hơn sẽ được duyệt trước đỉnh xa hơn
//   - Tìm được đường đi ngắn nhất (nếu đồ thị không có trọng số)
// ============================================================================
void bfs(vector<vector<ll>> &dp, ll point_start, vector<ll> &vis) {
  // Khởi tạo queue để lưu các đỉnh cần duyệt
  // Queue hoạt động theo nguyên tắc FIFO (First In First Out)
  queue<ll> q;

  // Bước 1: Đưa đỉnh bắt đầu vào queue
  q.push(point_start);

  // Đánh dấu đỉnh bắt đầu đã được thăm
  vis[point_start] = true;

  // Bước 2: Lặp lại cho đến khi queue rỗng (không còn đỉnh nào cần duyệt)
  while (!q.empty()) {
    // Lấy đỉnh ở đầu queue ra để xử lý
    // Đây là đỉnh được thêm vào queue sớm nhất trong số các đỉnh chưa xử lý
    ll point_current = q.front();
    q.pop(); // Xóa đỉnh khỏi queue sau khi lấy ra

    // In đỉnh hiện tại ra màn hình (hoặc file output)
    // Đây là thứ tự duyệt của đỉnh trong BFS
    cout << point_current << " ";

    // Duyệt tất cả các đỉnh kề với đỉnh hiện tại
    for (auto it : dp[point_current]) {
      // Chỉ xử lý các đỉnh chưa được thăm
      if (!vis[it]) {
        // Đưa đỉnh kề vào queue để xử lý sau
        // Các đỉnh này sẽ được duyệt ở các bước tiếp theo
        q.push(it);

        // Đánh dấu đỉnh này đã được thăm ngay khi đưa vào queue
        // Điều này đảm bảo mỗi đỉnh chỉ được thêm vào queue một lần
        vis[it] = true;
      }
    }
  }
  // Kết thúc khi đã duyệt hết tất cả các đỉnh có thể đến được từ point_start
}