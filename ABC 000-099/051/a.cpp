#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t = "";
  cin >> s;
  for (char x : s) {
    if (x == ',')
      t += " ";
    else
      t += x;
  }
  cout << t << endl;
}
