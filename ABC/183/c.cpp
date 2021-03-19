#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, ans = 0;
  cin >> n >> k;
  vector<vector<int>> t(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> t[i][j];
    }
  }

  vector<int> c(n - 1);
  for (int i = 0; i < n - 1; i++) c[i] = i + 1;
  do {
    int s = 0;
    s += t[0][c[0]];
    for (int i = 0; i < n - 1; i++) {
      s += t[c[i]][c[i + 1]];
    }
    s += t[c[c.size()]][0];
    if (s == k) ans++;
  } while (next_permutation(c.begin(), c.end()));

  cout << ans << endl;
}
