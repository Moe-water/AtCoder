#include <bits/stdc++.h>
using namespace std;

int main() {
  int count, d_sum = 0, sum = 0, ans;
  cin >> count;
  vector<int> a(count);
  for (int i = 0; i < count; i++) {
    cin >> a[i];
    d_sum += pow(a[i], 2);
    sum += a[i];
  }
  ans = count * d_sum - pow(sum, 2);

  cout << ans << endl;
}
