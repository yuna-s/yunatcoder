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
  int n,k,ans=0;
  cin >> n >> k;
  vector<int> p(n);

  rep(i,n){
    cin>> p[i];
  }

  sort(p.begin(), p.end());
  rep(i,k){
    ans+=p[i];
  }
  cout << ans << endl;
  
}