#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, t;
  cin >> n >> m >> t;
  vector<int> a(m), b(m), c(m);
  for (int i = 0; i < m; i++) {
    cin >> a[i] >> b[i];
    c[i] = b[i] - a[i];
  }
  int n1 = n;
  bool can = true;
  for (int i = 0, j = 0; i < t; i++) {
    if (i == a[j]) {
      // cout << i << " " << n << endl;
      i = b[j];
      if (n + c[j] >= n1)
        n = n1;
      else
        n += c[j];
      j++;
      // cout << i << " " << n << endl;
    }
    n--;

    // if (i == t) cout << i << " " << n << endl;
    if (n <= 0) {
      can = false;
      break;
    }
  }
  if (can)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
