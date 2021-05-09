#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> data(h, vector<int>(w));
  vector<int> h_sum(w, 0), w_sum(h, 0);
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) cin >> data[i][j];
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      h_sum[j] += data[i][j];
      w_sum[i] += data[i][j];
    }
  }

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      data[i][j] = h_sum[j] + w_sum[i] - data[i][j];
      cout << data[i][j] << " ";
    }
    cout << endl;
  }
}
