#include <iostream>
#include <vector>
using namespace std;
using Int = long long;
template <typename T1, typename T2>
inline void chmin(T1 &a, T2 b)
{
    if (a > b)
        a = b;
}
template <typename T1, typename T2>
inline void chmax(T1 &a, T2 b)
{
    if (a < b)
        a = b;
}

//INSERT ABOVE HERE
signed main()
{
    Int n, m;
    cin >> n >> m;
    vector<Int> cnt(n + 1, 0);
    for (Int i = 0; i < m; i++)
    {
        Int l, r;
        cin >> l >> r;
        l--;
        cnt[l]++;
        cnt[r]--;
    }
    for (Int i = 0; i < n; i++)
        cnt[i + 1] += cnt[i];

    Int ans = 0;
    for (Int i = 0; i < n; i++)
        ans += cnt[i] == m;
    cout << ans << endl;
    return 0;
}
