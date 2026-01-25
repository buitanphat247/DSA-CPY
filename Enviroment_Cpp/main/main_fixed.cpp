#include <algorithm>
#include <iostream>
using namespace std;

int light[100];
int heavy[100];
int price[10000][3]; // price[i][0]=nghỉ, price[i][1]=light, price[i][2]=heavy

void Inputarray(int n, int array[]) {
  for (int i = 1; i <= n; i++)
    cin >> array[i];
}

int main() {
  int n;
  cin >> n;
  Inputarray(n, light);
  Inputarray(n, heavy);

  price[1][0] = 0;        // Tuần 1 nghỉ
  price[1][1] = light[1]; // Tuần 1 light work
  price[1][2] = 0;        // Tuần 1 không thể heavy work

  for (int i = 2; i <= n; i++) {
    // Nghỉ tuần i: từ bất kỳ trạng thái tuần i-1
    price[i][0] = max({price[i - 1][0], price[i - 1][1], price[i - 1][2]});

    // Light work tuần i: từ bất kỳ trạng thái tuần i-1
    price[i][1] =
        max({price[i - 1][0], price[i - 1][1], price[i - 1][2]}) + light[i];

    // Heavy work tuần i: chỉ từ tuần i-1 nghỉ
    price[i][2] = price[i - 1][0] + heavy[i];
  }

  cout << max({price[n][0], price[n][1], price[n][2]}) << endl;
  return 0;
}
