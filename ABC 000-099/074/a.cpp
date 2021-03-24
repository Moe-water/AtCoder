#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  /*
    if ((a + b) % 2 == 0)
      cout << (a + b) / 2 << endl;
    else
      cout << (a + b) / 2 + 1 << endl;
    */
  // int型で割り切れなかった場合、切り捨てになるため
  cout << (a + b + 1) / 2 << endl;
}
