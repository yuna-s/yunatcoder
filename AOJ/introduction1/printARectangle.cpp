#include <iostream>
using namespace std;

int main()
{

    while (1)
    {
        int h, w;
        cin >> h >> w;

        if (h == 0 && w == 0)
            break;

        string wid = "";
        for (int i = 0; i < w; i++)
        {
            wid += "#";
        }
        for (int i = 0; i < h; i++)
        {
            cout << wid << endl;
        }
        cout << endl;
    }
}