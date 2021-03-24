#include <bits/stdc++.h>
using namespace std;

int main() {
  int k, ans = 0;
  string n;
  cin >> n >> k;
  for (int j = 0; j < k; j++) {
    vector<int> a(n.length());
    int mx = 0, mn = 0;
    for (int i = 0; i < n.length(); i++) a.at(i) = n.at(i) - '0';
    stable_sort(a.begin(), a.end());  // 昇順に並べ替える
    /*    for (int i = 0; i < n.length(); i++) cout << a.at(i) << " ";
        cout << endl;*/

    for (int i = 0, h = n.length() - 1; i < n.length(); i++, h--) {
      mn += a.at(i) * pow(10, h);  // pow(m,n) mのn乗数
      mx += a.at(i) * pow(10, i);
    }
    if (ans == 0 and j != 0) break;
    ans = mx - mn;
    n = to_string(ans);
    //    cout << mx << " " << mn << " " << n << endl;
  }
  cout << ans << endl;
}
