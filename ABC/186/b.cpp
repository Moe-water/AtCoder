#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> a(h, (vector<int>(w)));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) cin >> a.at(i).at(j);
  }

  int mini = 101;
  for (int i = 0; i < h; ++i)
    mini = min(mini, (int)*min_element(a[i].begin(), a[i].end()));

  int ans = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      ans += a[i][j] - mini;
    }
  }
  cout << ans << endl;
}
