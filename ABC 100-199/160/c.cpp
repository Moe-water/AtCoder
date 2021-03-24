#include <bits/stdc++.h>
using namespace std;

int main() {
  int k, n, cl, re;
  cin >> k >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  int d_max = 0;
  for (int i = 1; i < n; i++) {
    if (d_max < a.at(i) - a.at(i - 1)) d_max = a.at(i) - a.at(i - 1);
  }

  int d_0n = k - a.at(n - 1) + a.at(0);
  cout << min(k - d_max, k - d_0n) << endl;
}
