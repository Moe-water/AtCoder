#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  string s, t, u;
  cin >> s >> t;
  cin >> a >> b >> u;
  if (s == u)
    cout << a - 1 << " " << b << endl;
  else
    cout << a << " " << b - 1 << endl;
}
