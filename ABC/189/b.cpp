#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x, xx = 0, ans = -1;
  cin >> n >> x;
  vector<int> v(n), p(n);
  for (int i = 0; i < n; i++) {
    cin >> v.at(i) >> p.at(i);
    if (p[i] != 0) xx += v[i] * p[i] / 100;
    if (xx > x) {
      ans = i + 1;
      break;
    }
  }
  cout << ans << endl;
}
