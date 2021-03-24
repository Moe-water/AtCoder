#include <bits/stdc++.h>
using namespace std;

int main() {
  int w, h, n, ans = 0;
  cin >> w >> h >> n;
  vector<int> x(n), y(n), a(n);
  vector<vector<int>> data(h, vector<int>(w, 0));
  for (int i = 0; i < n; i++) cin >> x[i] >> y[i] >> a[i];

  for (int i = 0; i < n; i++) {
    int ws, wg, hs, hg;
    if (a[i] <= 2) {
      hs = 0;
      hg = h;
      if (a[i] == 1) {
        ws = 0;
        wg = x[i];
      }
      if (a[i] == 2) {
        ws = x[i];
        wg = w;
      }
    } else {
      ws = 0;
      wg = w;
      if (a[i] == 3) {
        hs = 0;
        hg = y[i];
      }
      if (a[i] == 4) {
        hs = y[i];
        hg = h;
      }
    }
    for (int hh = hs; hh < hg; hh++) {
      for (int ww = ws; ww < wg; ww++) {
        data[hh][ww] = 1;
      }
    }
  }
  for (int hi = 0; hi < h; hi++) {
    for (int wi = 0; wi < w; wi++) {
      if (data[hi][wi] == 0) ans++;
    }
  }
  cout << ans << endl;
}
