#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str = "Hello";
  string s;
  char c = 'a';
  char d = str.at(4);
  cout << str.size() << endl; // 文字列の長さ
  cout << str.at(0) << endl;
  cout << c << endl;
  cout << d << endl;

  str.at(0) = 'M';
  cout << str << endl;

  cout << "AtCoder"s.size() << endl; // sがないとエラー

  getline(cin, s); // 変数sで入力を1行受け取る
}
