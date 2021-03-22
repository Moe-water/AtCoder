#include <bits/stdc++.h>
using namespace std;

int main() {
  int count;
  cin >> count;
  vector<int> a(count);
  for (int i = 0; i < count; i++) cin >> a[i];
  sort(a.rbegin(), a.rend());
  int ans = 1, gcd = 1;
  for (int i = 2; i <= a.at(0); i++) {
    int k = 0;
    for (int j = 0; j < count; j++) {
      if (a.at(j) % i == 0) k++;
    }

    if (k >= gcd) {
      gcd = k;
      ans = i;
    }
  }
  cout << ans << endl;
}
