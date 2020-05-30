#include <iostream>
#include <list>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int r, d, x;
    cin >> r >> d >> x;

    rep(i, 10)
    {
        x = r * x - d;
        cout << x << endl;
    }
}