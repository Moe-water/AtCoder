#include <bits/stdc++.h>
using namespace std;

int main() {
  int count;
  vector<int> d(count);
  cin >> count;

  for (int i = 0; i < count; i++) {
    cin >> d.at(i);
    for (int j = 0; j < i; j++) {
      if (d.at(i) == d.at(j)) {
        d.at(i) = -1;
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < count; i++) {
    if (d.at(i) > 0) ans++;
  }
  cout << ans << endl;
}
