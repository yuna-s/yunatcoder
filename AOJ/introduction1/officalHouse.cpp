#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int house[4][3][10] = {0};

    for (int i = 0; i < n; i++)
    {
        int b, f, r, v;
        cin >> b >> f >> r >> v;
        b--;
        f--;
        r--;
        house[b][f][r] += v;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int s = 0; s < 10; s++)
            {
                cout << " " << house[i][j][s];
            }
            cout << endl;
        }
        if (i != 3)
            cout << "####################" << endl;
    }
}