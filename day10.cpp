#include <iostream>
using namespace std;
/*
  do-while文
  break,continue文
*/
int main(){
  int a = 0;
  while(a!=4){
    a++;
    cout << a << endl;
  }

  do{
    a--;
    cout << a << endl;
  }while(a!=1);//このセミコロンは非常に忘れやすいので注意!
  int b;
  while(1){
    cout << "Input a > ";
    cin >> a;
    if(a==0)break;
    else cout << "if you want to end this loop, you input \"a = 0\""<<endl;
    cout << "Input b > ";
    cin >> b;
    if(b==0)continue;
    cout << "if your input of b is 0, this comment is not shown."<<endl;
  }
  return 0;
}
