#include <bits/stdc++.h>
using namespace std;
int func(int n,int k=0)
{
    if (n == 0)
    {
        return k;
    }
    return func(n - 1,k+n);
}
int main()
{
    cout<<func(50)<<endl;
    return 0;
}