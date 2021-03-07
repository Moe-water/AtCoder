#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, ave = 0;
  cin >> N;

  vector<int> a(N, 0);
  for (int i = 0; i < N; i++)
    cin >> a.at(i);
  for (int i = 0; i < N; i++)
    ave += a.at(i);
  ave /= N;
  for (int i = 0; i < N; i++)
  {
    a.at(i) = abs(ave - a.at(i));
    cout << a.at(i) << endl;
  }
}
