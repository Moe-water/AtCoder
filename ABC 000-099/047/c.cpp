#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int ans = 0;

  char a = s[0];
  for (char x : s) {
    if (x != a) {
      ans++;
      a = x;
    }
  }
  cout << ans << endl;
}
