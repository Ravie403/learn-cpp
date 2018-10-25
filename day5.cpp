#include <iostream>
using namespace std;
/*
  グローバル変数の強みを理解しよう！
*/
int a = 10;

void cast(){
  int b = 20;
  cout << a << endl;
  cout << b << endl;
}

void incre(){
  int b = 1;
  a++;
  b++;
  cout << a << endl;
  cout << b << endl;
}
int main(){
  int b = 1;
  cout << a << endl;
  cout << b << endl;
  auto itr = d.begin();
  a++;
  cast();
  incre();
  incre();
  return 0;
}
