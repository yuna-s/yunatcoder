#include<bits/stdc++.h>
using namespace std;
using Int = long long;
template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}

//INSERT ABOVE HERE
signed main(){
  string s;
  cin>>s;
  set<string> s1,s2;
  for(Int i=0;i<100;i++){
    for(Int j=1;j<=12;j++){
      string a=to_string(i);
      string b=to_string(j);
      if(a.size()==1u) a='0'+a;
      if(b.size()==1u) b='0'+b;
      s1.emplace(a+b);
      s2.emplace(b+a);
    }
  }
  if(s1.count(s)&&!s2.count(s)){
    cout<<"YYMM"<<endl;
  }
  if(!s1.count(s)&&s2.count(s)){
    cout<<"MMYY"<<endl;
  }
  if(s1.count(s)&&s2.count(s)){
    cout<<"AMBIGUOUS"<<endl;
  }
  if(!s1.count(s)&&!s2.count(s)){
    cout<<"NA"<<endl;
  }
  return 0;
}

