#include <iostream>
#include <string>
#include <locale>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    string s, p;
    getline(cin, s);
    getline(cin, p);
    if ((s + s).find(p) != string::npos)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
}