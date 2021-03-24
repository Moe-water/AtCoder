#include <bits/stdc++.h>
using namespace std;

int main() {
  int count, ans = 0;
  cin >> count;
  vector<string> s(count, "");
  for (int i = 0; i < count; i++) cin >> s.at(i);
  set<string> s2(s.begin(),
                 s.end());  //  vectorからsetに変換することで重複する要素を削除

  /*  for (int i = 0; i < count; i++) {
      for (int j = i + 1; j < count; j++) {
        if (s.at(i) != s.at(j)) ans++;
      }
    }*/
  cout << s2.size() << endl;
}
