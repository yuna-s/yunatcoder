#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int d, r;
    double f;

    d = a / b;
    r = a % b;
    f = ((double)a) / b;
    cout << d << " " << r << " ";
    printf("%d %d %.5lf\n", d, r, f);
}