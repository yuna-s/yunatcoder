#include <iostream>
#include <string>
#include <locale>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main(){
  //a animals
  int a,b,d=0;
  cin >> a >> b;
  rep(i,a+1){
    if ((2*i+4*(a-i))==b){
      cout << "Yes" << endl;
      d=1;
      break;
    }
  }
  if (d==0){
      cout << "No" << endl;

  }
  

}