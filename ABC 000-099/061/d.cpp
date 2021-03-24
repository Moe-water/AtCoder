#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w, n;
  cin >> h >> w >> n;
  vector<vector<int>> data(h, vector<int>(w, 0));
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    data[a - 1][b - 1] = 1;
  }

  vector<long long int> ans(9, 0);
  for (int i = 1; i < h - 1; i++) {
    for (int j = 1; j < w - 1; j++) {
      int kuro = 0;
      // cout << "i: " << i << " j: " << j << "  ";
      if (data[i - 1][j - 1] == 1) kuro++;
      if (data[i - 1][j] == 1) kuro++;
      if (data[i - 1][j + 1] == 1) kuro++;
      if (data[i][j - 1] == 1) kuro++;
      if (data[i][j] == 1) kuro++;
      if (data[i][j + 1] == 1) kuro++;
      if (data[i + 1][j - 1] == 1) kuro++;
      if (data[i + 1][j] == 1) kuro++;
      if (data[i + 1][j + 1] == 1) kuro++;
      ans[kuro]++;
      // cout << "kuro: " << kuro << endl;
    }
  }

  // for (int i = 0; i < 9; i++) cout << ans[i] << " ";
  // cout << endl;
  for (int i = 0; i < 10; i++) cout << ans[i] << endl;
}
