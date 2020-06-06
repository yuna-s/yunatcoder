#include <iostream>
#include <string>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    // S H C D
    int card[52] = {0};
    int n;
    cin >> n;
    rep(i, n)
    {
        int l;
        char s;
        cin >> s >> l;
        l--;
        if (s == 'S')
            card[l] = 1;
        else if (s == 'H')
            card[13 + l] = 1;
        else if (s == 'C')
            card[26 + l] = 1;
        else if (s == 'D')
            card[39 + l] = 1;
    }
    rep(i, 52)
    {
        if (card[i] == 0)
        {
            int j = i / 13;
            int r = i % 13;
            if (j == 0)
                cout << "S " << r + 1 << endl;
            if (j == 1)
                cout << "H " << r + 1 << endl;
            if (j == 2)
                cout << "C " << r + 1 << endl;
            if (j == 3)
                cout << "D " << r + 1 << endl;
        }
    }
}