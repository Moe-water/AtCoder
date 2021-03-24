#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  string s;
  cin >> a >> b >> c;
  if (c == 0) {
    if (a > b)
      s = "Takahashi";
    else
      s = "Aoki";
  } else {
    if (b > a)
      s = "Aoki";
    else
      s = "Takahashi";
  }
  cout << s << endl;
}
