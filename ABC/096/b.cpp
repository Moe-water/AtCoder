#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(3, 0);
  int k;
  cin >> a[0] >> a[1] >> a[2] >> k;
  stable_sort(a.begin(), a.end());
  for (int i = 0; i < k; i++) {
    a[2] *= 2;
  }
  cout << a[0] + a[1] + a[2] << endl;
}