#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, n, ans = 0;
  cin >> n >> a >> b;
  for (int i = 0; i <= n; i++) {
    string n2;
    n2 = to_string(i);
    int sum = 0;
    for (int j = 0; j < n2.length(); j++) {
      char keta = n2.at(j);
      sum += keta - '0';
    }
    if (sum >= a and sum <= b) ans += i;
  }
  cout << ans << endl;
}
