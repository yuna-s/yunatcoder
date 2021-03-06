#include <iostream>
#include <list>
#include <set>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n, m;
    int ans = 0;
    cin >> n >> m;
    vector<int> s(n + 1, 0);

    rep(i, m)
    {
        int left, right;
        cin >> left >> right;
        left--;
        s[left]++;
        s[right]--;
    }

    rep(i, n)
    {
        s[i + 1] += s[i];
    }
    rep(i, n)
    {
        if (s[i] == m)
            ans++;
    }
    cout << ans << endl;
}