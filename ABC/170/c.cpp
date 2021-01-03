#include <iostream>
#include <list>
#include <set>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <queue>

using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main(){
  int x,n;
  int l[101]={0};
  cin >> x>> n;
  if(n!=0){
  rep(i,n){
    int p;
    cin>>p;
    l[p]=1;
  }

  int minabs=100;
  vector<int> ans;
  priority_queue<pair<int, int>,std::vector<pair<int, int>>, std::less<pair<int, int>> > q;

  for(int i=1;i<=100;i++){
    if(l[i]==0){
      if(abs(abs(x)-i)<=minabs){
        minabs=abs(abs(x)-i);
        cout << "min" << i <<":" <<  abs(abs(x)-i) << endl;
        ans.push_back(i);
      }
    }
  }
  if(ans.size()==1){
    cout << ans[0] << endl;
  }else{
    if(ans[0]<ans[1]){
      cout << ans[0] << endl;
    }else{
      cout << ans[1] << endl;
    }
  }
  }else{
    cout << x << endl;
  }

}