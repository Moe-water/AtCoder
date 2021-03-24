#include <bits/stdc++.h>
using namespace std;

int main() {
  long int n, x, t, nn = 0;
  int i;
  cin >> n >> x >> t;
  if (n % x == 0)
    cout << n / x * t << endl;
  else
    cout << (n / x + 1) * t << endl;
}
