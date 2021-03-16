#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  char b;
  int ans = 0;
  cin >> n;

  for (char a : n) ans += a - '0';
  if (ans % 9 == 0 or ans == 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
