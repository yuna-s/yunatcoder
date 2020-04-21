#include <iostream>
#include <list>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int s;
    cin >> s;

    // YY は 99までOK
    // MM　は　12　まで
    if (s / 100 > 12 || s / 100 == 0)
    {
        if (s - (s / 100) * 100 > 12)
        {
            cout << "NA" << endl;
        }
        else if (s - (s / 100) * 100 > 0)
        {
            cout << "YYMM" << endl;
        }
        else
        {
            cout << "NA" << endl;
        }
    }
    else if (s / 100 > 0)
    {
        if (s - (s / 100) * 100 > 12 || s - (s / 100) * 100 == 0)
        {
            cout << "MMYY" << endl;
        }
        else if (s - (s / 100) * 100 > 0)
        {
            cout << "AMBIGUOUS" << endl;
        }
        else
        {
            cout << "NA" << endl;
        }
    }
    else
    {
        cout << "NA" << endl;
    }
    return 0;
}