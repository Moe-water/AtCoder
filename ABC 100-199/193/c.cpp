#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t = 0, x;
  cin >> n;

  if (n <= 3)
    cout << n << endl;
  else {
    for (int k = 4; k <= n; k++) {
      for (int i = 2; i <= sqrt(n); i++) {
        for (int j = 2; pow(i, j) <= n; j++) {
          x = pow(i, j);
          if (k == x) t++;
          //          printf("%d %d %d %d\n", k, i, j, x);
        }
      }
    }
    cout << n - t << endl;
  }
}
