#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> a(m, 0), b(m, 0), c(n + 1, 0);
  for (int i = 0; i < m; i++)
  {
    cin >> a.at(i) >> b.at(i);
    c.at(a.at(i))++;
    c.at(b.at(i))++;
  }
  for (int i = 1; i <= n; i++)
    cout << c.at(i) << endl;
}
