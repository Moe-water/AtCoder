#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> x(n), p(100, 10000000001);
  for (int i = 0; i < n; i++) cin >> x.at(i);

  reverse(x.begin(), x.end());
  // for (int i = 1; i <= x.at(0); i++) {
  for (int i = 1; i <= 100; i++) {
    p.at(i - 1) = 0;
    for (int j = 0; j < n; j++) {
      p.at(i - 1) += pow(x.at(j) - i, 2);
    }
  }

  sort(p.begin(), p.end());
  // for (int i = 0; i < x.at(0); i++) cout << p.at(i) << " ";
  cout << p.at(0) << endl;
}
