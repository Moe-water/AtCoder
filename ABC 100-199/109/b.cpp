#include <bits/stdc++.h>
using namespace std;

int main() {
  int count, p = 0;
  char st, fi;
  cin >> count;
  vector<string> s(count);
  cin >> s.at(0);
  for (int i = 1; i < count; i++) {
    fi = s.at(i - 1).at(s.at(i - 1).length() - 1);
    cin >> s.at(i);
    st = s.at(i).at(0);
    if (fi != st) {
      p++;
      //      cout << fi << st << endl;
    }
  }
  for (int i = 0; i < count; i++) {
    for (int j = i + 1; j < count; j++) {
      if (s.at(i) == s.at(j)) {
        p++;
        //        cout << s.at(i) << s.at(j) << endl;
      }
    }
  }
  if (p >= 1)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
}
