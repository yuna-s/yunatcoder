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
  // ASCII
  string ans="";
  char as = 96;
  char zs = 123;
  long long n;
  cin >> n;
  vector<int> dog;
   
  while(1){
    int a= n%26;
    long long x=n/26;
    dog.push_back(a);
    if  (n<26)break;
    else n=x;
  }
  int zflag=0;
  rep(i, dog.size()){
    if (dog[i]==0){
      if(dog[i+1]==1){
        ans="z"+ans;
        i++;
        zflag=1;
        continue;
      }
    }else if (dog[i]==1){
      if(zflag==1)
      {
        ans="z"+ans;
        continue;
      }
    }else zflag = 0;
    char t=as+dog[i];
    ans= t+ans;
  }
  cout << ans << endl;
}