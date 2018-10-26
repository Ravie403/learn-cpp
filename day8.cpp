#include <iostream>
#include <vector>
#include <string>
using namespace std;
/*
  基本的なのがfor文。C++11以降のautoを用いてvector<type>::iteratorを楽に宣言できるように。素敵
*/
int main(){
  int a = 10;
  int value[a];
  for(int i=0;i<a;i++){
    value[i] = i+1;
    cout << value[i] << endl;
  }
  vector<int>A;
  for(int i=0;i<a;i++){
    A.push_back(i);
  }
  for(auto itr=A.begin();itr!=A.end();itr++){
    cout << *itr << endl;
  }
  return 0;
}
