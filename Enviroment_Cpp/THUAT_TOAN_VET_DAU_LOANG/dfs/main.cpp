/*
 * ============================================================================
 * THUẬT TOÁN DFS (DEPTH-FIRST SEARCH) - DUYỆT THEO CHIỀU SÂU
 * ============================================================================
 *
 * Mô tả thuật toán:
 *   - DFS là thuật toán duyệt đồ thị theo chiều sâu
 *   - Bắt đầu từ một đỉnh, đi sâu nhất có thể trước khi quay lại
 *   - Sử dụng đệ quy (recursion) hoặc stack để lưu các đỉnh cần duyệt
 *   - Nguyên tắc: Vào sau ra trước (LIFO - Last In First Out)
 *   - Giống như việc khám phá một mê cung: đi thẳng đến khi không đi được nữa
 * thì quay lại
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
 *   - Không gian: O(V + E) để lưu đồ thị và O(V) cho mảng visited và stack đệ
 * quy
 *
 * Ví dụ:
 *   Input:
 *     5 4
 *     1 2
 *     1 3
 *     2 4
 *     3 5
 *   Output:
 *     1 2 4 3 5
 *     (hoặc có thể khác tùy vào thứ tự các đỉnh kề)
 *
 * So sánh với BFS:
 *   - BFS: Duyệt theo chiều rộng, dùng Queue, đỉnh gần được duyệt trước
 *   - DFS: Duyệt theo chiều sâu, dùng Stack/Đệ quy, đi sâu nhất có thể trước
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

// Hàm thực hiện thuật toán DFS
// Tham số: dp - danh sách kề, point_start - đỉnh bắt đầu, vis - mảng đánh dấu
// đã thăm
void dfs(vector<vector<ll>> &dp, ll point_start, vector<ll> &vis);

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

  // Thực hiện thuật toán DFS bắt đầu từ đỉnh 1
  // Kết quả sẽ được in ra màn hình (hoặc file output)
  dfs(dp, 1, vis);

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
// HÀM DFS - THUẬT TOÁN DUYỆT THEO CHIỀU SÂU
// ============================================================================
// Mục đích: Duyệt tất cả các đỉnh của đồ thị bắt đầu từ đỉnh point_start
//           theo thứ tự đi sâu nhất có thể trước khi quay lại (theo chiều sâu)
//
// Tham số:
//   - dp: danh sách kề của đồ thị
//   - point_start: đỉnh hiện tại đang được duyệt
//   - vis: mảng đánh dấu các đỉnh đã được thăm (sẽ được cập nhật)
//
// Cách hoạt động của DFS (sử dụng đệ quy):
//   1. Đánh dấu đỉnh hiện tại đã được thăm
//   2. Xử lý đỉnh hiện tại (in ra màn hình)
//   3. Duyệt tất cả các đỉnh kề với đỉnh hiện tại:
//      - Với mỗi đỉnh kề chưa được thăm:
//        + Gọi đệ quy DFS cho đỉnh đó (đi sâu vào đỉnh đó)
//        + Sau khi quay lại từ đệ quy, tiếp tục với đỉnh kề tiếp theo
//
// Đặc điểm của DFS:
//   - Sử dụng đệ quy (recursion) - mỗi lần gọi đệ quy tạo một frame trên stack
//   - Đi sâu nhất có thể trước khi quay lại (backtracking)
//   - Không đảm bảo duyệt theo thứ tự khoảng cách như BFS
//   - Hữu ích cho: tìm đường đi, kiểm tra chu trình, topological sort, v.v.
//
// Ví dụ minh họa với đồ thị: 1-2-4 và 1-3-5
//   - Bắt đầu từ đỉnh 1
//   - Đi vào đỉnh 2, sau đó đi vào đỉnh 4
//   - Quay lại đỉnh 2, quay lại đỉnh 1
//   - Đi vào đỉnh 3, sau đó đi vào đỉnh 5
//   - Kết quả: 1 2 4 3 5
// ============================================================================
void dfs(vector<vector<ll>> &dp, ll point_start, vector<ll> &vis) {
  // Bước 1: Đánh dấu đỉnh hiện tại đã được thăm
  // Điều này ngăn việc duyệt lại đỉnh này trong các lần gọi đệ quy sau
  vis[point_start] = true;

  // Bước 2: Xử lý đỉnh hiện tại (in ra màn hình hoặc file output)
  // Đây là thứ tự duyệt của đỉnh trong DFS
  cout << point_start << " ";

  // Bước 3: Duyệt tất cả các đỉnh kề với đỉnh hiện tại
  // Với mỗi đỉnh kề, ta sẽ đi sâu vào đỉnh đó nếu chưa được thăm
  for (auto it : dp[point_start]) {
    // Chỉ xử lý các đỉnh chưa được thăm
    if (!vis[it]) {
      // Gọi đệ quy DFS cho đỉnh kề này
      // Điều này có nghĩa là ta sẽ đi sâu vào đỉnh 'it' và tất cả các đỉnh
      // có thể đến được từ 'it' trước khi quay lại xử lý các đỉnh kề khác
      //
      // Cơ chế đệ quy:
      // - Mỗi lần gọi dfs() tạo một frame mới trên call stack
      // - Frame này lưu trữ trạng thái của vòng lặp hiện tại
      // - Khi đệ quy kết thúc, quay lại frame trước và tiếp tục vòng lặp
      dfs(dp, it, vis);

      // Sau khi quay lại từ đệ quy, tiếp tục với đỉnh kề tiếp theo trong vòng
      // lặp
    }
  }
  // Kết thúc hàm: quay lại frame đệ quy trước đó (nếu có) hoặc kết thúc chương
  // trình
}