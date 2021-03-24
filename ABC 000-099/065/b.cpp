#include <bits/stdc++.h>
using namespace std;

int main()
{
  int count, j;
  cin >> count;
  vector<int> a(count);
  for (int i = 0; i < count; i++)
    cin >> a.at(i);

  j = a.at(0);
  for (int i = 1; i < count + 1; i++)
  {
    if (j == 2)
    {
      cout << i << endl;
      break;
    }
    j = a.at(j - 1);
    if (i == count)
    {
      cout << "-1" << endl;
      break;
    }
  }
}
