#include <iostream>
#include <string>
#include <locale>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

string txt_tolower(string txt)
{
    locale l = std::locale::classic();
    string lowerdtxt = "";
    for (string::iterator itr = txt.begin(); itr != txt.end(); ++itr)
    {
        lowerdtxt += tolower(*itr, l);
    }
    return lowerdtxt;
}

int main()
{

    string word;
    cin >> word;
    word = txt_tolower(word);

    int ans = 0;
    while (1)
    {
        string s;
        cin >> s;
        if (s == "END_OF_TEXT")
            break;
        s = txt_tolower(s);
        if (s == word)
            ans++;
    }
    cout << ans << endl;
}