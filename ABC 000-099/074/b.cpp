#include <bits/stdc++.h>
using namespace std;

int main() {
  int count, k;
  cin >> count >> k;
  int x, sum = 0;

  for (int i = 0; i < count; i++) {
    cin >> x;
    if (abs(x - k) > x)
      sum += 2 * x;
    else
      sum += 2 * abs(x - k);
  }
  cout << sum << endl;
}
