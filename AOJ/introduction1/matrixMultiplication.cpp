#include <iostream>
#include <string>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n, m, l;
    cin >> n >> m >> l;
    long long a[n][m], b[m][l], c[n][l];
    rep(i, n)
    {
        rep(j, m)
        {
            cin >> a[i][j];
        }
    }
    rep(i, m)
    {
        rep(j, l)
        {
            cin >> b[i][j];
        }
    }
    rep(i, n)
    {
        rep(j, l)
        {
            rep(k, m)
            {
                if (k == 0)
                    c[i][j] = a[i][k] * b[k][j];
                else
                    c[i][j] += a[i][k] * b[k][j];
            }
            cout << c[i][j];
            if (j == l - 1)
                continue;
            else
                cout << " ";
        }
        cout << endl;
    }
}