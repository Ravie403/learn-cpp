#include <iostream>
using namespace std;
/*
  関数の作成だ！基本的には使う前に定義しなければ使えないぞ！
  戻り値の型を関数の前に入れよう！
  再帰関数もできるが総じて重たいのでやめよう！
*/
int aplusb(int a,int b){
  return a+b;
}
void empty(){
  cout << "called!"<<endl;
}
int recursion(int a){
  return a==0?0:a+recursion(a-1);
}
int main(){
  int a = 1,b = 2;
  cout << "a = " << a << ", b = " <<b << endl;
  cout << "a+b = "<< aplusb(a,b) << endl;
  empty();
  cout << recursion(20) << endl;
  return 0;
}
