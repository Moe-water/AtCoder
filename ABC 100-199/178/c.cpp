#include <bits/stdc++.h>
using namespace std;

long long int nCr(int n, int r) {
  long long int ans = 1;
  for (int i = n; i >= r; i--) ans *= i;
  for (int i = r; i >= 2; i--) ans /= i;
  return ans;
}

int main() {
  long long int ans = 0, n, k = 1000000007;
  cin >> n;

  if (n == 1) {
  } else if (n == 2) {
    ans = nCr(2, 1);
  } else if (n == 3) {
    ans = nCr(3, 2);
  } else {
    int i;
    if (n % 2 == 0) {
      for (i = 1; i < n / 2; i++) {
        ans += nCr(n, i);
      }
      ans *= 2;
      ans += nCr(n, i + 1);
    } else {
      for (i = 1; i <= n / 2; i++) {
        ans += nCr(n, i);
      }
      ans *= 2;
    }
  }
  ans = ans % k;
  cout << ans << endl;
}
