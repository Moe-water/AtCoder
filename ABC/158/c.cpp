#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, i, c, d;
  cin >> a >> b;
  for (i = 0; i < 1001; i++) {
    c = i * 0.08;
    d = i * 0.10;
    if (c == a and d == b) break;
  }

  if (i != 1001)
    cout << i << endl;
  else
    cout << "-1" << endl;
}
