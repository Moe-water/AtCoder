#include <bits/stdc++.h>
using namespace std;

string set8(int x) {
  string s = "";
  while (x > 0) {
    s += to_string(x % 8);
    x /= 8;
  }
  return s;
}

int main() {
  int count, ans = 0;
  cin >> count;
  for (int i = 1; i <= count; i++) {
    bool can = true;
    string s = to_string(i);
    for (char x : s) {
      if (x == '7') {
        can = false;
        break;
      }
    }

    if (can) {
      string s = set8(i);
      for (char x : s) {
        if (x == '7') {
          can = false;
          break;
        }
      }
    }

    if (can) ans++;
  }
  cout << ans << endl;
}
