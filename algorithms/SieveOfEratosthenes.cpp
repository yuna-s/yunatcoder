#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

//エラトステネスのふるい
int main()
{
    int n; // n以下の素数判定
    cin >> n;
    vector<int> isPrime(n + 1, 1);
    isPrime[0] = 0;
    isPrime[1] = 0;

    for (int i = 2; i * i < n + 1; i++)
    {
        if (!isPrime[i])
            continue;
        for (int j = i * 2; j < n + 1; j += i)
        {
            isPrime[j] = 0;
        }
    }

    rep(i, n + 1) cout << isPrime[i] << endl;
}