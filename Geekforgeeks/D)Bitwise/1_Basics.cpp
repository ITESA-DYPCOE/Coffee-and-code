#include <bits/stdc++.h>
using namespace std;
unsigned int getFirstSetBit(int n)
{
    int res = 1;
    while (n > 0)
    {
        if (n & 1)
            return res;

        n=n >> 1;
        res++;
    }
    return 0;
}
int main()
{
    cout<<getFirstSetBit(8)<<endl;
    return 0;
}