#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  char op;
  int B;
  int i;
  cin >> N >> A;

  // ここにプログラムを追記
  for (i = 0; i < N; i++) {
    cin >> op >> B;

    if (op == '+') A = A + B;
    if (op == '-') A = A - B;
    if (op == '*') A = A * B;
    if (op == '/') {
      if (B == 0) {
        cout << "error" << endl;
        break;
      }
      A = A / B;
    }
    cout << i + 1 << ":" << A << endl;
  }
}
