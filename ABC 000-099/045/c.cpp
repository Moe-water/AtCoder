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
  string s;
  cin >> s;
  vector<vector<int>> c(pow(2, s.size()), vector<int>());
  c = BitFullSerch(s.size() - 1);

  long long int ans = 0;
  for (int i = 1; i < c.size(); i++) {
    for (int j = 0; j < c[i].size(); j++) {
      if () {
      }
    }
  }
}
