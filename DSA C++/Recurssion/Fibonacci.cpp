#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int so1 = fib(n - 1);
    int so2 = fib(n - 2);
    return so1 + so2;
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}