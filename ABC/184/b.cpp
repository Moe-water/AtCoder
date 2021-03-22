#include <bits/stdc++.h>
using namespace std;

int main() {
  int count, x;
  string s;
  cin >> count >> x >> s;
  for (int i = 0; i < count; i++) {
    if (s[i] == 'o')
      x++;
    else if (x != 0)
      x--;
  }
  cout << x << endl;
}
