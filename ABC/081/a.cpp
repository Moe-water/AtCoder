#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int ans = 0;
  ans += (s[0] == '1');
  ans += (s[1] == '1');
  ans += (s[2] == '1');

  cout << ans << endl;
}

/* 入力
101 → 2
000 → 0
*/