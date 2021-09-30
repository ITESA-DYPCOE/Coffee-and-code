#include <bits/stdc++.h>
using namespace std;
int func(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    else
    return func(n-1)+func(n-2);
}
int main()
{
    cout<<func(1)<<endl;
    return 0;
}