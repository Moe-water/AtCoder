#include <bits/stdc++.h>
using namespace std;

int main() {
  unsigned long long int n, ans = 0, i, x;
  cin >> n;
  if (n >= 1000) ans += n - 999;
  if (n >= 1000000) ans += n - 999999;
  if (n >= 1000000000) ans += n - 999999999;
  if (n >= 1000000000000) ans += n - 999999999999;
  if (n >= 1000000000000000) ans += n - 999999999999999;

  /*  if (n < 1000) {
    } else {
      nn = to_string(n);
      i = nn.size() / 3;
      while (n > 999) {
        x = n - (pow(1000, i) - 1);
        ans += x * i;
        n -= x;
        cout << "n：" << n << "  x：" << x << "  i：" << i << "  ans：" << ans
             << endl;
        i--;
      }
    }*/
  cout << ans << endl;
}
