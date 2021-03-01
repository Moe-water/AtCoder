#include <bits/stdc++.h>
using namespace std;

int main() {
  int count;
  cin >> count;
  vector<int> p(count), x(count), t(count);
  vector<float> a(count);
  for (int i = 0; i < count; i++) {
    cin >> a.at(i) >> p.at(i) >> x.at(i);
    x.at(i) -= a.at(i);
    if (x.at(i) <= 0) p.at(i) = 1000000001;
  }
  if (1000000001 == *min_element(p.begin(), p.end()))
    cout << "-1" << endl;
  else
    cout << *min_element(p.begin(), p.end()) << endl;
}
