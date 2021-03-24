#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, ans;
  char op;
  cin >> a >> op >> b;
  if (op == '+')
    ans = a + b;
  if (op == '-')
    ans = a - b;

  cout << ans << endl;
}
