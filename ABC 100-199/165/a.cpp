#include <bits/stdc++.h>
using namespace std;

int main() {
  int k, a, b;
  cin >> k >> a >> b;
  bool can = true;
  for (int i = 0;; i++) {
    if (a <= k * i and b >= k * i) break;
    if (k * i > b) {
      can = false;
      break;
    }
  }
  if (can)
    cout << "OK" << endl;
  else
    cout << "NG" << endl;
}
