#include<iostream>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;

  int a[n][m], b[m];

  for (int i=0;i<n; i++){
    for (int j=0; j<m; j++){
      cin >> a[i][j];
    }
  }
  for (int i=0;i<m; i++){
    cin >> b[i];
  }

  for (int i=0;i<n; i++){
    int ans=0;
    for (int j=0; j<m; j++){
      ans += a[i][j]*b[j];
    }
    cout << ans << endl;
  }

}