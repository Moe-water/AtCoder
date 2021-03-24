#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int x, sum = 0;

  cin >> s;

  for (char c : s) {  // string を1文字ずつ c に入れる
    int a = c - '0';
    sum += a;
  }
  x = stoi(s);  // 文字列をintに変換
  if (x % sum == 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
