#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0)) << endl;
}