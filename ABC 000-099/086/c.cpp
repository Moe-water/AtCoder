#include <bits/stdc++.h>
using namespace std;

bool idou(int t, int x, int y) {
  bool a = false, b = false;
  int z = x + y;
  if (z % 2 == t % 2) a = true;
  if (t >= z) b = true;
  if (a and b)
    return true;
  else
    return false;
}

int main() {
  int count;
  cin >> count;
  vector<int> t(count + 1), x(count + 1), y(count + 1);
  t[0] = x[0] = y[0] = 0;

  for (int i = 1; i < count + 1; i++) cin >> t[i] >> x[i] >> y[i];

  bool c = true;
  for (int i = 1; i < count + 1; i++) {
    int dt = t[i] - t[i - 1];
    if (!idou(dt, abs(x[i] - x[i - 1]), abs(y[i] - y[i - 1]))) {
      c = false;
      break;
    }
  }
  if (c)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
