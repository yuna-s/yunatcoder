#include <iostream>
#include <string>
#include <locale>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    string s;
    int alp[26] = {};

    while (getline(cin, s))
    {
        rep(i, s.length())
        {
            int num = (int)(tolower(s[i]) - 'a');
            if (num > 25 || num < 0)
                continue;
            alp[num]++;
        }
    }
    int a = (int)'a';
    rep(i, 26)
    {
        cout << (char)(i + a) << " : " << alp[i] << endl;
    }
}