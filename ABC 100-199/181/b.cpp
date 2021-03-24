#include <bits/stdc++.h>
using namespace std;

int main() {
  int count;
  cin >> count;
  vector<long long int> a(count), b(count);
  for (int i = 0; i < count; i++) cin >> a[i] >> b[i];

  long long int ans = 0;
  /*  for (int i = 0; i < count; i++) {
      for (int j = a[i]; j <= b[i]; j++) {
        ans += j;
      }
    }
    */
  for (int i = 0; i < count; i++) {
    if ((a[i] + b[i]) % 2 == 0) {
      int c = (b[i] - a[i]) / 2;
      ans += (a[i] + b[i]) * c + (a[i] + b[i]) / 2;
    } else {
      int c = (b[i] - a[i]) / 2 + 1;
      ans += (a[i] + b[i]) * c;
    }
  }

  cout << ans << endl;
}
