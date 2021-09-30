#include <bits/stdc++.h>
using namespace std;
int func(int n,int k=1)
{
    if (n == 0||n==1)
    {
        k=k*n;
        return k;
    }
    k=k*n;
    return func(n - 1,k);
}
int main()
{
    cout<<func(15)<<endl;
    return 0;
}