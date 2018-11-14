#include <iostream>
using namespace std;
/*
  switch文
*/
int main(){
  int a,b,op;
  while(1){
    cout << "input a,b if you want to end this program,you input\"0 0\""<<endl;
    cout << "> "<<flush;
    cin>>a>>b;
    if(a==0&&b==0)break;
    cout << "input operator [1,2,3,4] > "<<flush;
    cin>>op;
    switch (op) {
      case 1:
        cout << a+b << endl;break;
      case 2:
        cout << a-b << endl;break;
      case 3:
        cout << a*b << endl;break;
      case 4:
        if(b!=0)cout << a/b << endl;
        else cout << "Invalid value for b"<<endl;
        break;
      default:
        cout << "Invalid operator" << endl;
        continue;
    }
  }
  return 0;
}
