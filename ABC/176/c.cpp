#include <bits/stdc++.h>
using namespace std;

int main() {
  int count;
  cin >> count;
  vector<long int> a(count);
  long ans = 0;
  for (int i = 0; i < count; i++) cin >> a[i];
  for (int i = 1; i < count; i++) {
    if (a[i - 1] > a[i]) {
      ans += a[i - 1] - a[i];
      a[i] = a[i - 1];
    }
    //    for (int j = 0; j < count; j++) cout << a[j] << " ";
    //  cout << endl;
  }
  cout << ans << endl;
}