#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w, x, y, ans = 1;
  cin >> h >> w >> x >> y;
  vector<string> data(h);
  for (int i = 0; i < h; i++) {
    cin >> data[i];
  }

  for (int i = x - 2; i >= 0; i--) {
    if (data[i][y - 1] == '#') {
      break;
    }
    ans++;
  }
  for (int i = x; i < h; i++) {
    if (data[i][y - 1] == '#') {
      break;
    }
    ans++;
  }
  for (int i = y - 2; i >= 0; i--) {
    if (data[x - 1][i] == '#') {
      break;
    }
    ans++;
  }
  for (int i = y; i < w; i++) {
    if (data[x - 1][i] == '#') {
      break;
    }
    ans++;
  }

  cout << ans << endl;
}
