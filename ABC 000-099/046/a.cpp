#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, ans;
  cin >> a >> b >> c;
  if (a == b and b == c)
    ans = 1;
  else if (a == b or b == c or a == c)
    ans = 2;
  else
    ans = 3;
  cout << ans << endl;
}
