#include <bits/stdc++.h>
using namespace std;

int main() {
  int count, s = 0;
  cin >> count;
  vector<int> a(count), b(count), c(count * count);
  for (int i = 0; i < count; i++) cin >> a[i] >> b[i];

  for (int i = 0; i < count; i++) {
    for (int j = 0; j < count; j++, s++) {
      if (i != j)
        c[s] = max(a[i], b[j]);
      else
        c[s] = a[i] + b[j];
    }
  }

  // for (int i = 0; i < count * count; i++) cout << c[i] << " ";
  sort(c.begin(), c.end());
  cout << c[0] << endl;
}
