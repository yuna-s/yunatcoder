#include <iostream>
#include <string>
#include <locale>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    string s;
    locale l = locale::classic();
    getline(cin, s);
    rep(i, s.length())
    {
        if (isupper(s[i]))
        {
            cout << tolower(s[i], l);
        }
        else
        {
            cout << toupper(s[i], l);
        }
    }
    cout << endl;
}