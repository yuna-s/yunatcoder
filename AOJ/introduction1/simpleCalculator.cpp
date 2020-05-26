#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        int a, b;
        string o;
        cin >> a >> o >> b;

        if (o == "?")
            break;
        if (o == "+")
        {
            cout << a + b << endl;
        }
        else if (o == "-")
        {
            cout << a - b << endl;
        }
        else if (o == "*")
        {
            cout << a * b << endl;
        }
        else if (o == "/")
        {
            cout << a / b << endl;
        }
    }
}