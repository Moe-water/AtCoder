#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, r = 0, b = 0;
  string s;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    for (int j = 0; j < n; j++) {
      if (s.at(j) == 'R')
        r++;
      else if (s.at(j) == 'B')
        b++;
    }
  }

  if (r > b)
    cout << "TAKAHASHI" << endl;
  else if (r < b)
    cout << "AOKI" << endl;
  else
    cout << "DRAW" << endl;
}
