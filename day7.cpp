#include <iostream>
using namespace std;
/*
  ようやくif-else!ながい！
*/

int main(){
  int a = 2, b = 3;
  if(a==2){
    cout << "OK!" << endl;
  }else{
    cout << "Not Running!" << endl;
  }

  if(a==2 && b==3){
    cout << "OK!" << endl;
  }else{
    cout << "Not Running!" << endl;
  }

  if(a==2 || b==4){
    cout << "OK!" << endl;
  }else{
    cout << "Not Running!" << endl;
  }

  if(a==1 ^ b==4){
    cout << "OK! but not running!" << endl;
  }else{
    cout << "NG! but running!" << endl;
  }

  if(!(a==1) && !(b==4)){
    cout << "OK!" << endl;
  }else{
    cout << "Not Running!" << endl;
  }
  return 0;
}
