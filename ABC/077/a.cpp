#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  int c = 0;
  cin >> a >> b;

  for (int i = 0, j = 2; i < 3; i++, j--) {
    if (a.at(i) == b.at(j)) {
    } else
      c++;
  }
  if (c > 0)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
}
