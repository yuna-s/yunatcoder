#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    rep(i, n)
    {
        cin >> a[i];
    }
    rep(i, n)
    {
        cin >> b[i];
    }
    //Minkowski
    double mp1 = 0.0;
    double mp2 = 0.0;
    double mp3 = 0.0;
    double mpi = 0.0;

    rep(i, n)
    {
        double z1 = abs(a[i] - b[i]);
        double z2 = z1 * z1;
        double z3 = z1 * z2;
        if (z1 > mpi)
            mpi = z1;
        mp1 += z1;
        mp2 += z2;
        mp3 += z3;
    }
    cout << fixed << setprecision(6) << mp1 << endl;
    cout << fixed << setprecision(6) << sqrt(mp2) << endl;
    cout << fixed << setprecision(6) << cbrt(mp3) << endl;
    cout << fixed << setprecision(6) << mpi << endl;
}