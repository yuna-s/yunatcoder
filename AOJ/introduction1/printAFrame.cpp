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

        string wid = "", midWid = "";
        for (int i = 0; i < w; i++)
        {
            wid += "#";
            if (i == 0 || i == w - 1)
            {
                midWid += "#";
            }
            else
                midWid += ".";
        }
        for (int i = 0; i < h; i++)
        {
            if (i == 0 || i == h - 1)
            {
                cout << wid << endl;
            }
            else
                cout << midWid << endl;
        }
        cout << endl;
    }
}