#include <iostream>
using namespace std;

int main()
{
    int cnt = 0;
    while (1)
    {
        int i;
        cin >> i;
        if (i == 0)
            break;
        cnt++;
        cout << "Case " << cnt << ": " << i << endl;
    }
}