#include <bits/stdc++.h>
using namespace std;

int main() {
  int count, ans = 0;
  cin >> count;
  vector<int> a(12, 1);
  for (int i = 0; i < count - 12; i++) {
    int t = 0;
    for (int j = 0; j < 12; j++) t += a[i];
    if (t == 12) ans++;
    for (int j = 0; j < count - 12; j++) {
    }
  }
}
