#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  bool can = false;
  string a, ans = "";
  set<string> s;
  for (int i = 0; i < n; i++) {
    cin >> a;
    // if (a[0] == '!') a.erase(a.begin(), a.begin() + 1);
    s.insert(a);
  }
  auto itr = s.begin();
  for (int i = 0; i < s.size(); i++) {
    if (s.count(*itr) and s.count("!" + *itr)) {
      can = true;
      ans = *itr;
      break;
    }
    itr++;
  }
  if (can)
    cout << ans << endl;
  else
    cout << "satisfiable" << endl;
}