#include <iostream>
using namespace std;

int main()
{
    long long n, min = 1000000, max = -1000000, sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (min > a)
            min = a;
        if (max < a)
            max = a;
        sum += a;
    }
    cout << min << " " << max << " " << sum << endl;
}