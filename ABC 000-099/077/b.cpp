#include <bits/stdc++.h>
using namespace std;

int main() {
  int count;
  int c = 1, i = 1;
  cin >> count;
  for (;; i++) {
    c = pow(i, 2);
    if (c <= count) {
    } else
      break;
  }
  if (i == 1)
    cout << "1" << endl;
  else
    cout << int(pow(i - 1, 2)) << endl;
}
