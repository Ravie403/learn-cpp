#include <iostream>
using namespace std;
/*
  整数(int32,int64,uint32,uint64)の演算をしよう！
  インクリメント、いくつかの演算子を覚えるべきだ！
  特に除算は整数型だと小数点が切り捨てになることに注意せよ！
*/
int main(){
  int a = 1;
  cout << a << endl;
  a = a + 2;
  cout << a << endl;
  a += 4;
  cout << a << endl;
  a -= 4;
  cout << a << endl;
  a++;
  cout << a << endl;
  a--;
  cout << a << endl;
  a = a * 5;
  cout << a << endl;
  a = a / 4;
  cout << a << endl;
  a = a % 2;
  cout << a << endl;
  a = (a<<5);
  cout << a << endl;
  a = (a>>2);
  cout << a << endl;
  a = a==8?1:0;
  cout << a << endl;
  a = a==0?1:0;
  cout << a << endl;
  return 0;
}
