#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    while (1)
    {
        int n;
        double sum = 0;
        cin >> n;
        if (n == 0)
            break;
        double a[n];
        rep(i, n)
        {
            cin >> a[i];
            sum += a[i];
        }
        double m = sum / n;
        double s = 0;
        rep(i, n)
        {
            s += pow(a[i] - m, 2.0);
        }
        cout << fixed << setprecision(8) << sqrt(s / n) << endl;
    }
}