#include <iostream>
using namespace std;

int main()
{
    int s, h, m;
    cin >> s;
    h = s / (60 * 60);
    m = (s - h * 60 * 60) / 60;

    cout << h << ":" << m << ":" << s - (h * 60 * 60 + m * 60) << endl;
}