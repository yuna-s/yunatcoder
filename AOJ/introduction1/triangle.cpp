#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double l = sqrt(pow(a, 2.0) + pow(b, 2.0) - 2.0 * a * b * cos(c * (M_PI / 180.0)));
    double h = b * sin((180.0 - c) * (M_PI / 180.0));
    cout << fixed << setprecision(8) << a * h / 2 << endl;
    cout << fixed << setprecision(8) << a + b + l << endl;
    cout << fixed << setprecision(8) << h << endl;
}