#include <bits/stdc++.h>
using namespace std;

int main() {
  int count;
  cin >> count;
  vector<int> x(count);
  for (int i = 0; i < count; i++) {
    cin >> x[i];
    x[i] = abs(x[i]);
  }

  // マンハッタン距離
  long int man = 0;
  for (int i = 0; i < count; i++) man += x[i];
  cout << man << endl;

  // ユークリッド距離
  long double yu = 0;
  for (int i = 0; i < count; i++) yu += x[i] * (long double)x[i];
  printf("%.15Lf\n", sqrt(yu));

  long int maxi;
  maxi = *max_element(x.begin(), x.end());
  cout << maxi << endl;
}
