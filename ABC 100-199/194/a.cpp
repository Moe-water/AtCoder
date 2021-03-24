#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  string s = "4";

  if (a + b >= 15 and b >= 8)
    s = "1";
  else if (a + b >= 10 and b >= 3)
    s = "2";
  else if (a + b >= 3)
    s = "3";
  cout << s << endl;
}
