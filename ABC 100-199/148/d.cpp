#include <bits/stdc++.h>
using namespace std;

int main() {
  int count, s = 0;
  cin >> count;
  vector<int> a(count), b(count, 0);
  for (int i = 0; i < count; i++) {
    cin >> a.at(i);
  }
  for (int i = 0, j = 1; i < count; i++) {
    if (a.at(i) == j) {
      j++;
    } else {
      s++;
    }
  }
  if (s >= count)
    cout << "-1" << endl;
  else
    cout << s << endl;
}
