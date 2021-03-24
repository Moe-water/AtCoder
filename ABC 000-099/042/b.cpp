#include <bits/stdc++.h>
using namespace std;

int main() {
  int count, l;
  cin >> count >> l;
  vector<string> s(count);
  for (int i = 0; i < count; i++) cin >> s[i];

  sort(s.begin(), s.end());
  for (int i = 0; i < count; i++) cout << s[i];
  cout << endl;
}
