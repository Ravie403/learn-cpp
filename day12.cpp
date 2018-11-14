#include <iostream>
using namespace std;
/*
  参照
*/

void Powering(int& x){
  x*=x;
}
int Modulus(int x,int y,int& m){
  if(y==0){
    m = 0;
    return 0;
  }
   m = x%y;
   return x/y;
}
int main(){
  int a = 5;
  cout << a << endl;
  Powering(a);
  cout << a << endl;
  Powering(a);
  cout << a << endl;
  int x = 10,y = 4,r;
  int d = Modulus(x,y,r);
  cout << d <<" "<<r << endl;
  return 0;
}
