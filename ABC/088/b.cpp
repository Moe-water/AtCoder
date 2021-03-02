#include <bits/stdc++.h>
using namespace std;

int main() {
  int count;
  cin >> count;
  vector<int> a(count), b(count);
  for (int i = 0; i < count; i++) {
    cin >> a.at(i);
  }
  for (int i = 0; i < count; i++) {
    int max = 0, k = 0;
    for (int j = 0; j < count; j++) {
      if (a.at(j) > max) {
        max = a.at(j);
        k = j;
      }
    }
    b.at(i) = max;
    a.at(k) = -1;
  }

  int ans = 0;
  for (int i = 0; i < count; i++) {
    if (i % 2 == 0)
      ans += b.at(i);
    else
      ans -= b.at(i);
  }
  cout << ans << endl;
}
