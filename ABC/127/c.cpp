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
    int l, r;
    int min = 0, max = 100001;
    cin >> n >> m;
    vector<int> x;

    rep(i, m)
    {
        cin >> l >> r;
        if (min < l)
        {
            min = l;
        }
        if (max > r)
        {
            max = r;
        }
    }
    if (max - min >= 0)
    {
        cout << max - min + 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}
