#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, d, m;
  cin >> n >> k;
  vector<int> a(n, 0);
  for (int i = 0; i < k; i++) {
    cin >> d;
    for (int j = 0; j < d; j++) {
      cin >> m;
      a.at(m - 1)++;
    }
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (a.at(i) == 0) ans++;
  }
  cout << ans << endl;
}
