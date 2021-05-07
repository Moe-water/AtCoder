#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int ans = 0;
  for (int i = 0; i < 3; i++) {
    if (s[i] == 'R') {
      ans++;
    }
  }
  if (ans == 2 and s[1] == 'S') ans = 1;
  cout << ans << endl;
}
