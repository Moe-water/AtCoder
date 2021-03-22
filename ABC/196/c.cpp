#include <bits/stdc++.h>
using namespace std;

int main() {
  long long count, ans = 0;
  cin >> count;
  if (10 <= count) {
    for (int i = 1;; i++) {
      string s = to_string(i);
      s += to_string(i);
      long long int x = stoll(s);

      if (x > count) break;
      if (s.size() % 2 == 1) i = pow(10, s.size());
      x = s.size() / 2;
      if (s.substr(0, x) == s.substr(x, x)) {
        ans++;
        // cout << s << " ";
      }
    }
  }
  // cout << endl;
  cout << ans << endl;
}
