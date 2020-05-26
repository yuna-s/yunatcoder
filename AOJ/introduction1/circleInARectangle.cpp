#include <iostream>
using namespace std;

int main()
{
    int w, h, x, y, r;
    cin >> w >> h >> x >> y >> r;

    if (x > 0 && y > 0)
    {
        if (w - (x + r) >= 0 && x - r >= 0 && h - (y + r) >= 0 && h - r >= 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    else
        cout << "No" << endl;
}