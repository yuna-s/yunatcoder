#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    priority_queue<int, std::vector<int>, std::greater<int>> q;
    q.push(a);
    q.push(b);
    q.push(c);

    while (!q.empty())
    {
        cout << q.top();
        q.pop();
        if (!q.empty())
        {
            cout << " ";
        }
    }
    cout << endl;
}