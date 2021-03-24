#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q, l, r, t;
  cin >> n >> q;
  vector<int> a(n, 0);
  for (int i = 0; i < q; i++) {
    cin >> l >> r >> t;
    for (int j = l; j <= r; j++) a.at(j - 1) = t;
  }
  for (int i = 0; i < n; i++) cout << a.at(i) << endl;
}
