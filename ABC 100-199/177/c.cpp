#include <bits/stdc++.h>
using namespace std;

int main() {
  long int count;
  cin >> count;
  vector<long int> a(count);
  for (int i = 0; i < count; i++){
    long int b;
    cin >> b;
    a[i] = b % 1000000007;
  }
}
