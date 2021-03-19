#include <bits/stdc++.h>
using namespace std;

int main() {
  float a, b, w;
  cin >> a >> b >> w;
  w *= 1000;

  int max = floor(w / a);
  int min = ceil(w / b);
  if (max >= min)
    cout << min << " " << max << endl;
  else
    cout << "UNSATISFIABLE" << endl;
}
