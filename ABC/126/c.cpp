#include <iostream>
#include <cmath>
#include <list>
#include <iomanip>
using namespace std;

#define rep(i, n) for (int i = 1; i < n; i++)

int main()
{
    long double n, k;
    int sum, count;
    long double ans = 0U;

    cin >> n >> k;
    // 1/n * (1/2)^(k/n+1)
    rep(i, n + 1)
    {
        sum = i;
        count = 0;
        while (sum < k)
        {
            sum = sum * 2;
            count++;
        }
        ans = ans + (1 / n) * pow(1.0 / 2.0, count);
    }
    cout << fixed << setprecision(12) << ans << endl;
    return 0;
}