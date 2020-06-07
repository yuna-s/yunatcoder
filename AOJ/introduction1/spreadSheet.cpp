#include <iostream>
#include <string>
#include <string>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int ans[r + 1][c + 1];
    ans[r][c] = 0;

    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            cin >> ans[i][j];
            if (j == 0)
                ans[i][c] = 0;
            if (i == 0)
                ans[r][j] = 0;
            ans[i][c] += ans[i][j];
            ans[r][j] += ans[i][j];
        }
        ans[r][c] += ans[i][c];
    }
    for (int i = 0; i <= r; i++)
    {

        for (int j = 0; j <= c; j++)
        {
            cout << ans[i][j];
            if (j == c)
                continue;
            cout << " ";
        }
        cout << endl;
    }
}