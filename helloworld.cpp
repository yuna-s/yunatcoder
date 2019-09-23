#include <iostream>
#include <list>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    string s, ans;
    cin >> s;
    string x[3] = {"Sunny", "Cloudy", "Rainy"};
    list<int> num(1, 2);

    rep(i, 3)
    {
        if (s == x[i])
        {
            ans = x[(i + 1) % 3];
        }
    }
    cout << ans << endl;
    return 0;
}