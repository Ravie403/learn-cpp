#include <iostream>
using namespace std;
/*
  (vectorを使っておいてなんだけど)一般的な配列の宣言方法を覚えよう!
  配列の大きさに変数も使えるようになったぞ！
*/
int main(){
  int a = 4;
  int b[2];
  b[0] = 5, b[1] = 3;//要素の先頭は"0"から!0-indexedとか0-basedとか言ったりする!
  for(int i=0;i<2;i++){
    cout << b[i] << endl;
  }

  int c[a] = {0,1,2,3};
  for(int i=0;i<a;i++){
    cout << i[c] << endl;//あれ？って思うけどコンパイルは通るしきちんと実行もできる！不思議！（仕様）
  }
  for(int i=0;i<2;i++){
    cout << 0[c],
    cout << c[1],
    cout << c[2],
    cout << c[3],
    cout << endl;//上記は「式」なので式の連続はカンマで区切ることができる!(だっけ)
  }

  int d[] = {0,1,2,3,4,5};
  for(int i:d){//foreach文 C++11で追加
    cout << i << endl;
  }
  return 0;
}
