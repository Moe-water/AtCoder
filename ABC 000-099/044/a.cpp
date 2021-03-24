#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, x, y;
  long int ans = 0;
  cin >> n >> k >> x >> y;
  if (n > k)
    ans += k * x + (n - k) * y;
  else
    ans += n * x;
  cout << ans << endl;
}
