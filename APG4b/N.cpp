#include <bits/stdc++.h>
using namespace std;

int main()
{

  // 文字列
  string str; // 文字列変数を宣言

  str = "abcd"; // 'a', 'b', 'c', 'd' という文字(char)の列を代入

  cout << str.at(0) << endl; // 1つ目である'a'を出力

  cout << str.size() << endl; // 文字列の長さである4を出力

  // 配列
  vector<int> vec; // int型の配列変数vecを宣言

  vec = {25, 100, 64};        // 25, 100, 64 という整数(int)の列を代入
  cout << vec.at(0) << endl;  // 1つめである25を出力
  vec.push_back(10);          // 末尾に10を追加
  cout << vec.size() << endl; // 配列の長さである3を出力
  vec.pop_back();             // 末尾の要素を削除

  vector<int> vec(3, 10); // {10, 10, 10} で初期化
}
