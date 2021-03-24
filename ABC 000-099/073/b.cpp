#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int l, r, sum = 0;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> l >> r;
    sum = sum + (r - l + 1);
  }
  cout << sum << endl;
}
