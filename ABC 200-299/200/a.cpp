#include <bits/stdc++.h>
using namespace std;

int main() {
  int count, ans;
  cin >> count;
  if (count % 100 == 0)
    ans = count / 100;
  else
    ans = count / 100 + 1;
  cout << ans << endl;
}
