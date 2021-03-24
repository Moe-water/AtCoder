#include <bits/stdc++.h>
using namespace std;

bool ok(int N, vector<int> d, int k) {
  int tmp = N;
  // for (int i = 0; i < k; i++) cout << d.at(i);
  while (tmp != 0) {
    for (int i = 0; i < k; i++) {
      if (tmp % 10 == d[i]) {
        // cout << N << " " << tmp % 10 << " " << d[i] << endl;
        return false;
      }
    }
    tmp /= 10;
  }
  return true;
}

int main() {
  int n, i, k;
  cin >> n >> k;
  vector<int> d(k);
  for (i = 0; i < k; i++) cin >> d[i];

  bool x = true;
  for (i = n; i < 99999; i++) {
    x = ok(i, d, k);
    if (x) break;
  }
  cout << i << endl;
}
