#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, ans = "";
  cin >> s;
  for (char x : s) {
    if (x == '0') ans += "0";
    if (x == '1') ans += "1";
    if (x == 'B') {
      if (ans != "") {
        ans = ans.substr(0, ans.size() - 1);
      }
    }
  }
  cout << ans << endl;
}
