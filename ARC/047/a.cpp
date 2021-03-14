#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l, ans = 0, tab = 1;
  string s;
  cin >> n >> l;
  cin >> s;

  for (char x : s) {
    if (x == '+') {
      tab++;
    } else if (x == '-') {
      tab--;
    }
    if (tab > l) {
      ans++;
      tab = 1;
    }
  }
  cout << ans << endl;
}