#include <bits/stdc++.h>
using namespace std;

vector<long int> a;

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

long int Kai(vector<int> s, int count) {
  vector<long int> c;
  long int ans = 0, k = 0;
  for (int i = 0, j = 0; i < count; i++) {
    k = k | a[i];
    if (i == s[j] + 1) {
      c.push_back(k);
      k = 0;
      if (s.size() - 2 > j) j++;
    }
  }
  c.push_back(k);
  /*  cout << "c[i]:";
    for (int i = 0; i < c.size(); i++) cout << c[i] << " ";
    cout << endl;*/

  ans = c[0];
  for (int i = 1; i < c.size(); i++) {
    ans = ans ^ c[i];
    // cout << "ans:" << ans << "  c[i]: " << c[i] << endl;
  }
  return ans;
}

int main() {
  int count;
  cin >> count;
  vector<vector<int>> s(pow(2, count - 1), vector<int>());
  s = BitFullSerch(count - 1);
  for (int i = 0; i < count; i++) {
    long int b;
    cin >> b;
    a.push_back(b);
  }

  long int ans = 0, k;
  if (count != 0) {
    for (int i = 1; i < pow(2, count - 1); ++i) {
      /*    cout << "s[i]:";
          for (int j = 0; j < (int)s[i].size(); ++j) cout << s[i][j] << " ";
          cout << endl;
      */
      k = Kai(s[i], count);
      if (i == 1) ans = k;
      if (ans > k) ans = k;
    }
  }

  cout << ans << endl;
}
