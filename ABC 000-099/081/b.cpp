#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> data(n);
  vector<int> ans(n);

  for (int i = 0; i < n; i++) {
    cin >> data.at(i);
  }

  // 答えを保持する変数
  for (int i = 0; i < n; i++) {
    int sum = 0;
    while (data.at(i) > 0) {
      if (data.at(i) % 2 > 0) {
        break;
      }
      data.at(i) /= 2;
      sum++;
    }
    ans.at(i) = sum;
  }
  cout << *min_element(ans.begin(), ans.end()) << endl;
}
