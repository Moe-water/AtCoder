#include <bits/stdc++.h>
using namespace std;

int main() {
  long double a, b;
  unsigned long long int n = 100, x, ans = 0;
  cin >> x;
  while (n < x) {
    n += n / 100;
    ans++;
  }
  cout << ans << endl;
}
