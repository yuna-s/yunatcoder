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
  int x,n;
  vector<int> d(102);

  rep(i, n){
    int p;
    cin>>p;
    d[p]=1;
  }
  P ans(99999, -1);
  rep(i,102){
    if(d[i]==1)continue;
    int dif=abs(x-i);
    ans=min(ans,P(dif,i));
  }

  cout << ans.second << endl;
}