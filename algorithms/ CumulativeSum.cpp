#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

/**
 * 累積和
 */
int main()
{
    int N;
    cin >> N; //配列サイズ
    vector<int> a(N);
    rep(i, N) cin >> a[i];

    //累積和
    vector<int> s(N + 1, 0);
    rep(i, N) s[i + 1] = s[i] + a[i];

    //区間[left, right)の総和を求める
    int left, right;
    cin >> left >> right;
    cout << s[right] - s[left] << endl;
}
