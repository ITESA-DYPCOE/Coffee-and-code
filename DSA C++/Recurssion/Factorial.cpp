#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int smallo = factorial(n - 1);
    return n * smallo;
}

int main()
{
    int n;
    cin >> n;
    int output = factorial(n);
    cout << output << endl;
    return 0;
}