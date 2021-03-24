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

int moji(string s) {
  long long ans = 0;
  string k1 = "";
  for (char x : s) {
    if (x == '+') {
      ans += stoi(k1);
      k1 = "";
    } else {
      k1 += x;
    }
  }
  ans += stoll(k1);
  return ans;
}

int main() {
  string s;
  cin >> s;

  vector<vector<int>> c(pow(2, s.size() - 1), vector<int>());
  c = BitFullSerch(s.size() - 1);

  long long ans = stoll(s);
  for (int i = 1; i < c.size(); i++) {
    string w = s;
    for (int j = 0, k = 1; j < c[i].size(); j++, k++) {
      w.insert(c[i][j] + k, "+");
    }
    ans += moji(w);
  }
  cout << ans << endl;
}
