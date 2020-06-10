#include <iostream>
#include <algorithm>
#include <string>
#include <locale>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    string str;
    cin >> str;
    int n;
    cin >> n;
    rep(i, n)
    {
        string order;
        int a, b;
        cin >> order >> a >> b;

        if (order == "print")
        {
            string s = str.substr(a, b - a + 1);
            cout << s << endl;
        }
        else if (order == "reverse")
        {
            string::iterator itr = str.begin();
            reverse(itr + a, itr + b + 1);
        }
        else if (order == "replace")
        {
            string p;
            cin >> p;
            string::iterator itr = str.begin();
            str.replace(itr + a, itr + b + 1, p);
        }
    }
}