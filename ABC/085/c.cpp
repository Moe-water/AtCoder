#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int N, Y;
  int s = 0;
  cin >> N >> Y;
  Y /= 1000;
  vector<int> a(3, -1);
  for (int z = 0; z <= N; z++) {
    int ay = N - z;
    for (int y = 0; y <= ay; y++) {
      int ax = N - y - z;
      for (int x = 0; x <= ax; x++) {
        int yen = 10 * x + 5 * y + 1 * z;
        if (Y == yen and x + y + z == N) {
          s++;
          a.at(0) = x;
          a.at(1) = y;
          a.at(2) = z;
        }
      }
    }
  }

  for (int i = 0; i < 3; i++) cout << a.at(i) << " ";
  cout << endl;
}
