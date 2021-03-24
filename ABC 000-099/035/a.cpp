#include <bits/stdc++.h>
using namespace std;

int main() {
  int w, h;
  cin >> w >> h;

  for (int i = 0;; i++) {
    if (w == i * 4 and h == i * 3) {
      cout << "4:3" << endl;
      break;
    } else if (w == i * 16 and h == i * 9) {
      cout << "16:9" << endl;
      break;
    }
    /* code */
  }
}
