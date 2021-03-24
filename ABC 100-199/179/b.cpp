#include <bits/stdc++.h>
using namespace std;

int main() {
  int count;
  cin >> count;
  vector<int> d1(count), d2(count);
  for (int i = 0; i < count; i++) cin >> d1[i] >> d2[i];

  bool can = false;
  for (int i = 0; i < count - 2; i++) {
    if (d1[i] == d2[i] and d1[i + 1] == d2[i + 1] and d1[i + 2] == d2[i + 2])
      can = true;
  }
  if (can)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
