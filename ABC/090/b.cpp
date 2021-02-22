#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  int sum = 0;
  cin >> a >> b;

  for (; a <= b; a++) {
    if ((a / 10000 == a % 10) && (a / 1000 % 10 == a / 10 % 10)) {
      sum++;
      //      cout << a << endl;
    }
  }
  cout << sum << endl;
}
