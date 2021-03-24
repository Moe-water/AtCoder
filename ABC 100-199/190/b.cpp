#include <bits/stdc++.h>
using namespace std;

int main() {
  int count, s, d;
  cin >> count >> s >> d;
  vector<vector<int>> a(2, vector<int>(count));
  for (int i = 0; i < count; i++) {
    cin >> a[0][i] >> a[1][i];
  }

  bool c = false;
  for (int i = 0; i < count; i++) {
    if (s > a[0][i] and d < a[1][i]) {
      c = true;
      break;
    }
  }
  if (c)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
