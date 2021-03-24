#include <bits/stdc++.h>
using namespace std;

int main() {
  string x;
  cin >> x;
  for (char k : x) {
    if (k == '.') break;
    cout << k;
  }
  cout << endl;
}
