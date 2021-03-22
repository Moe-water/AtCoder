#include <bits/stdc++.h>
using namespace std;

int main() {
  /* c++の精度
    int 型 -2.147483 10e-9 ~ 2.147483 10e+9
    float 型 -1.175494 10e-8 ~ 3.402823 10e+8
    double 型 -2.225074 10e-16 ~ 1.797693 10e+16
    long 型 -2.147483 10e-9 ~ 2.147483 10e+9
    unsigned long long 型 0 ~ 1.844674 10e+19

    cout << fixed(double 型)変数 << setprecision(桁数);
  */
  double x = 12.123456789;
  cout << fixed << setprecision(5) << x << endl;
  cout << fixed << setprecision(12) << x << endl;
}
