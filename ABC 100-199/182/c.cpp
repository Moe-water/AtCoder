#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> BitFullSerch(int n) {
  vector<vector<int>> s(pow(2, n), vector<int>());
  for (int bit = 0; bit < (1 << n); ++bit) {
    for (int i = 0; i < n; ++i) {
      if (bit & (1 << i)) {  // 列挙に i が含まれるか
        s[bit].push_back(i);
      }
    }
  }
  return s;
}

int main() {
  long long int nn;
  cin >> nn;
  int ans = 19;
  string n = to_string(nn);

  if (nn % 3 == 0) {
    ans = 0;
  } else {
    vector<vector<int>> s = BitFullSerch(n.size());
    for (int i = 0; i < pow(2, n.size()); i++) {
      string k = "";
      int keta = 0;
      for (int j = 0; j < s[i].size(); j++) {
        if (s[i][j] == 1) {
          k += n[j];
          keta++;
        }
      }
      long long nn = stoll(k);
      if (nn % 3 == 0 and keta <= ans) ans = keta;
    }
  }
  cout << ans << endl;
}