## AtCoder

「Ctrl + N」 で新しいファイルを作成
「Ctrl + @」 でコンソールを開く
「F6」 でコンパイル & 実行

## c++ メモ

- 二次元配列
  vector<vector<int>> data(3, vector<int>(4));

- 組み合わせ列挙
  vector<int> c(n);
  while (next_permutation(c.begin(), c.end())) {
  for (int i = 0; i < c.size(); i++) {
  cout << c[i] << " ";
  }
  cout << endl;
  }

## c++の精度

int 型 -2.147483 10e-9 ~ 2.147483 10e+9
float 型 -1.175494 10e-8 ~ 3.402823 10e+8
double 型 -2.225074 10e-16 ~ 1.797693 10e+16
long 型 -2.147483 10e-9 ~ 2.147483 10e+9
unsigned long long 型 0 ~ 1.844674 10e+19

cout << fixed(double 型)変数 << setprecision(桁数);

## git

- 変更した場合
  > git add .  
  > git commit -m 'コミットメッセージ'
  > git push

これで、全部を指定してローカルリポジトリからリモートリポジトリへと移動する作業を行うことができる

- 変更されたリモートリポジトリから、ローカルに落とす場合
  > git pull
