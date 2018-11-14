#include <iostream>
using namespace std;
/*
  参照
*/

void Powering(int& x){
  x*=x;
}
int main(){
  int a = 5;
  cout << a << endl;
  Powering(a);
  cout << a << endl;
  Powering(a);
  cout << a << endl;
  return 0;
}
