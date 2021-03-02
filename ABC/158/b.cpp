#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int n, a, b, c = 0, d = 0;
  cin >> n >> a >> b;
  if (a != 0 and b != 0) {
    c = n / (a + b);
    d = n % (a + b);
  }

  if (a == 0 and b == 0)
    cout << "0" << endl;
  else if (n <= a)
    cout << n << endl;
  else if (c >= 1)
    cout << c * a + d << endl;
  else
    cout << a << endl;
}
