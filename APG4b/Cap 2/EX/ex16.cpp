#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  bool a = false;
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  for (int i = 1; i < 5; i++) {
    if (data.at(i - 1) == data.at(i)) a = true;
  }
  if (a)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
