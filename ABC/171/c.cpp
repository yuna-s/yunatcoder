#include <iostream>
#include <list>
#include <set>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <queue>

using namespace std;
using P=pair<int,int>;
#define rep(i, n) for (int i = 0; i < n; i++)

int main(){

  long long n;
  string ans="";
  cin >> n;

  while(1){
    int a= n%26;
    long long x=n/26;
    std::cout << "a:" << a << endl;
    if  (a==1)ans ="a"+ans;
    else if  (a==2)ans = "b" +ans;
    else if  (a==3)ans = "c"+ans;
    else if  (a==4)ans = "d"+ans;
    else if  (a==5)ans = "e"+ans;
    else if  (a==6)ans = "f"+ans;
    else if  (a==7)ans = "g"+ans;
    else if  (a==8)ans = "h"+ans;
    else if  (a==9)ans = "i"+ans;
    else if  (a==10)ans = "j"+ans;
    else if  (a==11)ans = "k"+ans;
    else if  (a==12)ans = "l"+ans;
    else if  (a==13)ans = "m"+ans;
    else if  (a==14)ans = "n"+ans;
    else if  (a==15)ans = "o"+ans;
    else if  (a==16)ans = "p"+ans;
    else if  (a==17)ans = "q"+ans;
    else if  (a==18)ans = "r"+ans;
    else if  (a==19)ans = "s"+ans;
    else if  (a==20)ans = "t"+ans;
    else if  (a==21)ans = "u"+ans;
    else if  (a==22)ans = "v"+ans;
    else if  (a==23)ans = "w"+ans;
    else if  (a==24)ans = "x"+ans;
    else if  (a==25)ans = "y"+ans;
    else if  (a==0)ans = "z"+ans;

    if  (n<26)break;
    else n=x-1;
   }
  std::cout << ans <<endl;
}