#include <iostream>
using namespace std;
/*
  関数プロトタイプ
*/
int f1(int x,int y);
int f2(int x,int y);
int main(){
  int a = 2, b = 4;
  int d = f1(a,b);
  cout << d << endl;
  return 0;
}

int f1(int x,int y){
  return 1 + f2(x,y);
}

int f2(int x,int y){
  return x+y;
}
