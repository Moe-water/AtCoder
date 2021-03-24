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
  int n = 3;
  vector<vector<int>> s(pow(2, n), vector<int>());
  cout << "要素数：" << n << endl;

  // {0, 1, ..., n-1} の部分集合の全探索
  for (int bit = 0; bit < (1 << n); ++bit) {
    // 1<<n はビットを左へ２つシフトする。よって 2^n と同じ意味
    for (int i = 0; i < n; ++i) {
      if (bit & (1 << i)) {  // 列挙に i が含まれるか
        s[bit].push_back(i);
      }
    }

    cout << bit << ": {";
    for (int i = 0; i < (int)s[bit].size(); ++i) {
      cout << s[bit][i] << " ";
    }
    cout << "}" << endl;
  }
}