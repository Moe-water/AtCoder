#include <bits/stdc++.h>
using namespace std;

int main() {
  int count, h;
  cin >> count;
  vector<int> a(count);
  for (int i = 0; i < count; i++) cin >> a[i];
  /*
  if (count % 2 == 0)
    h = (a[count / 2 - 1] + a[count / 2]) / 2;
  else
    h = a[count / 2];
  */

  stable_sort(a.begin(), a.end());  // 昇順
  long int ans = 1000000000;
  for (int i = a[0]; i <= a[a.size() - 1]; i++) {
    int k = 0;
    for (int j = 0; j < count; j++) k += pow(a[j] - i, 2);

    if (ans > k) ans = k;
  }
  cout << ans << endl;
}
