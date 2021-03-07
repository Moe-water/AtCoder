#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  int ao, tk;
  cin >> a >> b >> c >> d;
  if (c % b == 0)
    tk = c / b;
  else
    tk = c / b + 1;
  if (a % d == 0)
    ao = a / d;
  else
    ao = a / d + 1;
  if (tk <= ao)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
