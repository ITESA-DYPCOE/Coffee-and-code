#include <bits/stdc++.h>
using namespace std;
int func(int n,int k=1)
{
    if(n==0||n==1)
    {
        return k;
    }
    return func(n-1,n*k);
}
int main()
{
    cout<<func(0)<<endl;
    return 0;
}