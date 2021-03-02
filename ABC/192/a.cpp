#include <bits/stdc++.h>
using namespace std;

int main() {
  int count, a;
  cin >> count;

  if (count % 100 == 0)
    a = 100;
  else
    a = 100 - count % 100;

  cout << a << endl;
}
