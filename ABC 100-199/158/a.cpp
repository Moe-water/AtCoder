#include <bits/stdc++.h>
using namespace std;

int main() {
  char s;
  int a = 0, b = 0;
  for (int i = 0; i < 3; i++) {
    cin >> s;
    if (s == 'A') a++;
    if (s == 'B') b++;
  }
  if (a >= 1 and b >= 1)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
