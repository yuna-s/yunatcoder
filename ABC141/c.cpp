#include <iostream>
#include <vector>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n, k, q;
    int a;
    cin >> n >> k >> q;
    vector<int> point(n, k);

    if ((k - q) > 0)
    {
        rep(i, n) cout << "Yes" << endl;
        return 0;
    }
    else
    {
        rep(i, q)
        {
            a = 0;
            cin >> a;
            point[(a - 1)] += 1;
        }
        rep(i, n)
        {
            if (point[i] - q > 0)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
