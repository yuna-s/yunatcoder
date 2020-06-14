#include <iostream>
#include <string>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    while (1)
    {
        int m, f, r;
        cin >> m >> f >> r;
        int score = m + f;
        if (m == -1 && f == -1 && r == -1)
            break;
        if (m == -1 || f == -1)
            cout << "F" << endl;
        else if (score >= 80)
            cout << "A" << endl;
        else if (score >= 65)
            cout << "B" << endl;
        else if (score >= 50)
            cout << "C" << endl;
        else if (score >= 30)
        {
            if (r >= 50)
                cout << "C" << endl;
            else
                cout << "D" << endl;
        }
        else
            cout << "F" << endl;
    }
}