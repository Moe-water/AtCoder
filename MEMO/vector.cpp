#include <bits/stdc++.h>
using namespace std;

int main() {
  // 二次元配列
  vector<vector<int>> data(3, vector<int>(4));

  // 組み合わせ列挙
  vector<int> c(count);
  for (int i = 0; i < c.size(); i++) {
    cout << c[i] << " ";
  }
  cout << endl;
  while (next_permutation(c.begin(), c.end())) {
    for (int i = 0; i < c.size(); i++) {
      cout << c[i] << " ";
    }
    cout << endl;
  }

  // 安定なソート
  stable_sort(a.begin(), a.end()); // 昇順
  stable_sort(a.rbegin(), a.rend()); // 降順

}
