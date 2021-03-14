#include <bits/stdc++.h>
using namespace std;

int main() {
  int count, n, ans;
  cin >> count;
  int c = count;
  n = pow(2, count);
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < count; i++) {
    for (int j = 0; j < c; j++) {
      if (a[2 * j] > a[2 * j + 1])
        a.erase(a.begin() + 2 * j - 1);
      else
        a.erase(a.begin() + 2 * j);
      for (int k = 0; k < a.size(); k++) cout << a[k];
      cout << endl;
      c /= 2;
    }
    ans = min(a[0], a[1]);
  };
  cout << ans << endl;
}
