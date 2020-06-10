#include <iostream>
#include <string>
#include <locale>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    vector<string> ans;
    while (1)
    {
        string cards;
        int n;
        cin >> cards;
        if (cards == "-")
            break;
        cin >> n;
        rep(i, n)
        {
            int h;
            cin >> h;
            string s = cards.substr(h);
            cards = s + cards.erase(h);
        }
        ans.push_back(cards);
    }

    for (vector<string>::iterator itr = ans.begin(); itr != ans.end(); ++itr)
    {
        cout << *itr << endl;
    }
}