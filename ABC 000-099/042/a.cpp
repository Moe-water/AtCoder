#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(3);
  int s5 = 0, s7 = 0;
  for (int i = 0; i < 3; i++) {
    cin >> a[i];
    if (a[i] == 5) s5++;
    if (a[i] == 7) s7++;
  }
  if (s5 == 2 and s7 == 1)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
