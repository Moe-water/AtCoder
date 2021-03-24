#include <bits/stdc++.h>
using namespace std;
AC
int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> s(h, vector<int>(w));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> s[i][j];
    }
  }
}
