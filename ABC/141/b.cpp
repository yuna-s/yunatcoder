#include <iostream>
#include <list>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    string s;
    cin >> s;
    char odd[3] = {'R', 'U', 'D'};
    char even[3] = {'L', 'U', 'D'};
    int slength = s.length();
    char x;

    rep(i, slength)
    {
        x = s[i];
        int flag = 0;
        if (i % 2 == 0)
        {
            rep(i, 3)
            {
                if (odd[i] == x)
                {
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                std::cout << "No" << endl;
                return 0;
            }
        }
        else
        {
            rep(i, 3)
            {
                if (even[i] == x)
                {
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                std::cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}