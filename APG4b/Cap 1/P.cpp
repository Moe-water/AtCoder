#include <bits/stdc++.h>
using namespace std;

// 関数定義
int my_min(int x, int y) {
  if (x < y) {
    return x;
  } else {
    return y;
  }
}

// 返り値が無いのでvoidを指定
void hello(string text) {
  cout << "Hello, " << text << endl;
  return;
}

int main() {
  int answer = my_min(10, 5);
  cout << answer << endl;  // 5
  hello("Tom");
  hello("C++");
}
