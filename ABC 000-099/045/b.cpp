#include <bits/stdc++.h>
using namespace std;

int main() {
  string sa, sb, sc;
  cin >> sa >> sb >> sc;

  int a = 1, b = 0, c = 0;
  char t = sa[0], ans;
  while (true) {
    if (t == 'a') {
      t = sa[a];
      a++;
    } else if (t == 'b') {
      t = sb[b];
      b++;
    } else if (t == 'c') {
      t = sc[c];
      c++;
    }
    if (sa.size() + 1 == a) {
      ans = 'A';
      break;
    } else if (sb.size() + 1 == b) {
      ans = 'B';
      break;
    } else if (sc.size() + 1 == c) {
      ans = 'C';
      break;
    }
  }
  cout << ans << endl;
}
