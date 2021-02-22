#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  char s;
  int i = 0;
  int y = 0;
  cin >> N;

  for (i = 0; i < N; i++) {
    cin >> s;
    if (s == 'Y') {
      y++;
    }
  }
  if (y > 0)
    cout << "Four" << endl;
  else
    cout << "Three" << endl;
}
