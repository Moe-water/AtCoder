#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> BitFullSerch(int n) {  // nは要素の数
  vector<vector<int>> s(pow(2, n), vector<int>());
  for (long long int bit = 0; bit < (1 << n); ++bit) {
    for (int i = 0; i < n; ++i) {
      if (bit & (1 << i)) {  // 列挙に i が含まれるか
        s[bit].push_back(i);
      }
    }
  }
  return s;
}

int main() {
  int n;
  double a;
  cin >> n >> a;
  vector<int> x(n), k(n, n);
  vector<vector<int>> s(pow(2, n), vector<int>());
  for (int i = 0; i < n; i++) cin >> x[i];
  stable_sort(x.begin(), x.end());  // 昇順
  for (int i = 0; i < n - 1; i++) {
  }

  s = BitFullSerch(n);

  long long int ans = 0;
  for (int i = 0; i < pow(2, n); i++) {
    double t = 0;
    for (int j = 0; j < (int)s[i].size(); ++j) {
      t += x[s[i][j]];
    }
    if (s[i].size() != 0) {
      double k = t / s[i].size();
      if (k == a) {
        ans++;
        //        for (int j = 0; j < (int)s[i].size(); ++j) cout << s[i][j] <<
        //        " ";
      }
      //      cout << endl;
    }
  }
  cout << ans << endl;
}
