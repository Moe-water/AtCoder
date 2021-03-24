#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int j = 0, k = 0;
  cin >> s;
  for (int i = 0; i < s.length(); i++, j++) {
    if (j % 2 == 0) {
      if (isupper(s.at(i))) k++;
      // 大文字である
    } else {
      if (isupper(s.at(i))) {
      }  // 大文字である
      else
        k++;
    }
    //    cout << s.at(i) << " " << k << " " << endl;
  }

  if (k > 0)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
}
