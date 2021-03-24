#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> nCr(int n, int r) {  // n個の要素のうちr個を選ぶ
  int kumi = 1;
  for (int i = n; i > r; i--) kumi *= i;
  for (int i = r; i > 1; i--) kumi /= i;
  cout << "組み合わせの数：" << kumi << endl;
  vector<vector<int>> c(kumi, vector<int>());

  for (int i = 0; i < kumi; i++) {
    for (int j = i; j < r; j++) {
      c[i].push_back()
    }
  }

  return c;
}

int main() {
  int n, r;
  cin >> n >> r;
  vector<vector<int>> c;
  c = nCr(n, r);
  for (int i = 0; i < c.size(); i++) {
    cout << i << " : { ";
    for (int j = 0; j < c[i].size(); j++) {
      cout << c[i][j] << ", ";
    }
    cout << " }" << endl;
  }
}
