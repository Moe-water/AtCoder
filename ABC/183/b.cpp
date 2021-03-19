#include <bits/stdc++.h>
using namespace std;

int main() {
  double sx, sy, gx, gy;
  double a;
  cin >> sx >> sy >> gx >> gy;
  a = (gy + sy) / (gx - sx);
  // cout << a << endl;
  a = sy / a + sx;
  printf("%.10f\n", a);
}
