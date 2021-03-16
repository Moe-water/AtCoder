#include <bits/stdc++.h>
using namespace std;

int main() {
  long n;
  cin >> n;

  set<long> ans;
  for (long i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      ans.insert(i);
      ans.insert(n / i);
    }
  }

  for (auto x : ans) cout << x << endl;
}
