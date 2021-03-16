#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int a, b, c;
  cin >> a >> b >> c;
  long long int x, y;
  x = 4 * a * b;
  y = c - a - b;
  if (x < y*y and y >= 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
