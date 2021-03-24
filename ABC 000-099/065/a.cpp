#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x, a, b;
  cin >> x >> a >> b;
  if (b - a > x)
    cout << "dangerous" << endl;
  else if (a - b >= 0)
    cout << "delicious" << endl;
  else
    cout << "safe" << endl;
}
