#include <iostream>
#include <stdio.h>
using namespace std;
using Int = long long;

Int GCD(Int a, Int b)
{
  if (b == 0)
    return a;
  else
    return GCD(b, a % b);
}

int main()
{
  int a, b;
  cin >> a >> b;
  cout << GCD(a, b) << endl;
}

// int main()
// {
//   int a, b, r;
//   cin >> a >> b;
//   r = a % b;

//   while (r != 0)
//   {
//     a = b;
//     b = r;
//     r = a % b;
//   }
//   cout << b << endl;
// }