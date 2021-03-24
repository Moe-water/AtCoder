#include <bits/stdc++.h>
using namespace std;

int main() {
  int aa = 0, bb = 0;
  string a, b;
  cin >> a >> b;
  for (char x : a) aa += x - '0';
  for (char x : b) bb += x - '0';
  if (aa > bb)
    cout << aa << endl;
  else
    cout << bb << endl;
}
