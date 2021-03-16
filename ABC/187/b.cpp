#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, ans = 0;
  float a;
  cin >> n;
  vector<float> x(n), y(n);
  for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      a = (y[j] - y[i]) / (x[j] - x[i]);
      if (a >= -1 and a <= 1) ans++;
    }
  }
  cout << ans << endl;
}
