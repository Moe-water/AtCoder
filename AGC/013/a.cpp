#include <bits/stdc++.h>
using namespace std;

int main() {
  int count, ans = 0, j;
  int c = 0, d = 0;
  cin >> count;
  vector<long int> a(count);

  for (int i = 0; i < count; i++) cin >> a.at(i);
  for (int i = 0; i < count; i++) {
    if (a[i] + 1 == a[i + 1]) {
      ans++;
      for (j = i; j < count; j++) {
        if (!(a[j] + 1 == a[j + 1])) break;
      }
    } else if (a[i] >= a[i + 1]) {
      ans++;
      for (j = i; j < count; j++) {
        if (!(a[j] >= a[j + 1])) break;
      }
    }
    i = j;
  }
  cout << ans << endl;
}
