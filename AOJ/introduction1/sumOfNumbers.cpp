#include <iostream>
#include <string>
#include <locale>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    while (1)
    {
        string x;
        long long ans = 0;
        cin >> x;
        if (x == "0")
            break;
        rep(i, x.length())
        {
            ans += (long long)(x[i] - '0');
        }
        cout << ans << endl;
    }
}