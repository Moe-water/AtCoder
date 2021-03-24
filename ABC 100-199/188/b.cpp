#include <bits/stdc++.h>
using namespace std;

int main() {
  int count, ans = 0;
  cin >> count;
  vector<int> a(count), b(count);
  for (int i = 0; i < count; i++) cin >> a[i];
  for (int i = 0; i < count; i++) cin >> b[i];
  for (int i = 0; i < count; i++) ans += a[i] * b[i];
  if (ans == 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
