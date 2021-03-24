#include <bits/stdc++.h>
using namespace std;

int main() {
  int count, n, ans;
  cin >> count;
  int c = count;
  n = pow(2, count);
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < count - 1; i++) {
    vector<int> d;
    for (int j = 0; j < c; j++) {
      if (a[2 * j] > a[2 * j + 1])
        d.push_back(a[2 * j]);
      else
        d.push_back(a[2 * j + 1]);
    }
    // for (int k = 0; k < a.size(); k++) cout << d[k] << " ";
    // cout << endl;
    c /= 2;
    ans = min(d[0], d[1]);
  }
  int i;
  for (i = 0; i < n; i++) {
    if (a.at(i) == ans) {
      ans = i + 1;
      break;
    }
  }

  cout << ans << endl;
}
