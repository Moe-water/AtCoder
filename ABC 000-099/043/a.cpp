#include <bits/stdc++.h>
using namespace std;

int main() {
  int count, ans = 0;
  cin >> count;
  for (int i = 1; i <= count; i++) ans += i;
  cout << ans << endl;
}
