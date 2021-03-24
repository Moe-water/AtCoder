#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  if (s.size() < 2)
    cout << "-1 -1" << endl;
  else {
    for (int i = 0; i < s.size(); i++) {
      for (int j = i + 2; j < s.size(); j++) {
        string a = s.substr(i, j);
      }
    }
  }
}
