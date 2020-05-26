#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double r, area, cir;
    cin >> r;
    area = r * r * M_PI;
    cir = 2 * r * M_PI;

    printf("%.6lf %.6lf\n", area, cir);
}