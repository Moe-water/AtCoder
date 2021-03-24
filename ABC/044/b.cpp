#include <bits/stdc++.h>
using namespace std;

int main() {
  string w;
  cin >> w;

  bool can = true;
  for (char x : w) {
    int t = 0;
    for (char y : w) {
      if (x == y) t++;
    }
    if (t % 2 != 0) can = false;
  }
  if (can)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
