#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, ans = 0;
  string s = "";
  cin >> n >> k;
  while (n != 0) {
    n /= k;
    ans++;
  }
  cout << ans << endl;
}
