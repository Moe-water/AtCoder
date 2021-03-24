#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  vector<string> a(h);
  for (int i = 0; i < h; i++) {
    cin >> a.at(i);
  }

  for (int i = 0; i < h + 2; i++) {
    if (i == 0 or i == h + 1) {
      for (int j = 0; j < w + 2; j++) cout << "#";
      cout << endl;
    } else if (i < h + 1) {
      cout << "#" << a.at(i - 1) << "#" << endl;
    }
  }
}
