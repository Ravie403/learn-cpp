#include <iostream>
#include <string>
using namespace std;
/*
  c++にはデフォルトでstringなんてものはない！includeしよう！
  色々な型を理解しよう！
*/
int main(){
  int a = -5;
  bool b = true;
  float c = 0.243013;
  double d = 0.99349327854752;
  char e = 'o';
  char f[10] = "test!";
  string g = "CPP is MECHA MUZUKASHII!";
  unsigned int h = 19;
  long long i = -11230421343;
  unsigned long long j = 39294134443;
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  cout << d << endl;
  cout << e << endl;
  cout << f << endl;
  cout << g << endl;
  cout << h << endl;
  cout << i << endl;
  cout << j << endl;
  return 0;
}
