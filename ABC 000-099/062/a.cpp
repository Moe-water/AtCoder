#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x, y;
  cin >> x >> y;
  if (x == y)
    cout << "Yes" << endl;
  else if (x == 4 or x == 6 or x == 9 or x == 11)
  {
    if (y == 4 or y == 6 or y == 9 or y == 11)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }

  else
  {
    if (y == 1 or y == 3 or y == 5 or y == 7 or y == 8 or y == 10 or y == 12)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
}