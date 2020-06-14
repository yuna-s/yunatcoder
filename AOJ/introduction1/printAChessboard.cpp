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

        string oddWid = "", evenWid = "";
        for (int i = 0; i < w; i++)
        {
            if (i % 2 == 0)
            {
                oddWid += ".";
                evenWid += "#";
            }
            else
            {
                oddWid += "#";
                evenWid += ".";
            }
        }

        for (int i = 0; i < h; i++)
        {
            if (i % 2 == 0)
                cout << evenWid << endl;
            else
                cout << oddWid << endl;
        }
        cout << endl;
    }
}