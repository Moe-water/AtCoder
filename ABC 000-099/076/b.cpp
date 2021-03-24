#include <bits/stdc++.h>
using namespace std;

int main() {
  int count, k;
  int s = 1;
  cin >> count >> k;

  for (int i = 0; i < count; i++) {
    if (s*2 < s+k)
    s *= 2;
    else
    s += k;
  }
  cout << s << endl;
}
