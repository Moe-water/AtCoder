#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  c = min(a, b);  // 小さいほうの値を返す
  c = max(a, b);  // 大きいほうの値を返す
  swap(a, b);     // aとbの値を入れ替える

  vector<int> vec = {1, 5, 3};
  reverse(vec.begin(), vec.end());  // 要素の並びを逆順に {3, 5, 1}
  sort(vec.begin(), vec.end()); // 小さい順に並び替え {1, 3, 5}
}
