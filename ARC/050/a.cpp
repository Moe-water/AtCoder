#include <bits/stdc++.h>
using namespace std;

int main() {
  char c1, c2;
  cin >> c1 >> c2;

  // 大文字への変換
  c2 = toupper(c2);

  if (c1 == c2)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
