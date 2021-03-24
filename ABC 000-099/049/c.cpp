#include <bits/stdc++.h>
using namespace std;

string k[4] = {"dream", "dreamer", "erase", "eraser"};
int main() {
  string s;
  cin >> s;

  reverse(s.begin(), s.end());
  for (int i = 0; i < 4; ++i) reverse(k[i].begin(), k[i].end());

  bool c = true;
  for (int i = 0; i < s.size();) {
    bool c2 = false;
    for (int j = 0; j < 4; ++j) {
      string d = k[j];
      if (s.substr(i, d.size()) == d) {
        c2 = true;
        i += d.size();
      }
    }
    if (!c2) {
      c = false;
      break;
    }
  }

  if (c)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
