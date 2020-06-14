#include <iostream>
#include <string>
#include <locale>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n, p1 = 0, p2 = 0;
    cin >> n;
    rep(i, n)
    {
        string taro, hanako;
        cin >> taro >> hanako;
        if (taro == hanako)
        {
            p1++;
            p2++;
        }
        else if (taro > hanako)
        {
            p1 += 3;
        }
        else
            p2 += 3;
    }
    cout << p1 << " " << p2 << endl;
}