#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int ans;
  vector<long long int> a(4);
  cin >> a[0] >> a[1] >> a[2] >> a[3];
  for (int i = 0; i < 2; i++) {
    for (int j = 2; j < 4; j++) {
      long long int ans1;
      ans1 = a[i] * a[j];
      if (i == 0 and j == 2) ans = ans1;
      if (ans < ans1) ans = ans1;
    }
  }

  cout << ans << endl;
}
