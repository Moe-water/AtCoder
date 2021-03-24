#include <bits/stdc++.h>
using namespace std;

int main()
{
  int h, w;
  cin >> h >> w;
  vector<string> a(w),b;
  for (int i = 0; i < h; i++)
  {
    cin >> a.at(i);
    if (a.at(i) == '.')
    {
      a.at(i).at(j) = 0;
    }
  }
}

for (int i = 0; i < h; i++)
{
  for (int j = 0; j < w; j++)
  {
    if (a.at(i).at(j) == '#')
    {
      a.at(i - 1).at(j - 1)++;
      a.at(i - 1).at(j)++;
      a.at(i - 1).at(j + 1)++;
      a.at(i).at(j - 1)++;
      a.at(i).at(j + 1)++;
      a.at(i + 1).at(j - 1)++;
      a.at(i + 1).at(j)++;
      a.at(i + 1).at(j + 1)++;
    }
  }
}

for (int i = 0; i < h; i++)
{
  for (int j = 0; j < w; j++)
  {
    cin >> a.at(i).at(j);
    if (a.at(i).at(j) == '.')
    {
      cout << a.at(i).at(j);
    }
  }
}
cout << endl;
}
