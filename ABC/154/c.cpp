#include <bits/stdc++.h>
using namespace std;

int main() {
  int count;
  cin >> count;
  set<int> a;
  for (int i = 0; i < count; i++) {
    int x;
    cin >> x;
    a.insert(x);
  }

  bool can = false;
  /*  for (int i = 0; i < count; i++) {
      for (int j = i + 1; j < count; j++) {
        if (a[i] == a[j]) {
          can = true;
          break;
        }
      }
    }
    */
  if (a.size() == count) can = true;
  if (can)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
