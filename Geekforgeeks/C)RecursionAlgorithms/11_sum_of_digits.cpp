#include <bits/stdc++.h>
using namespace std;
int func(int n)
{
    if(n<=9)
    {
        return n;
    }
    return n%10+func(n/10);
}
int main()
{
    cout<<func(9987)<<endl;
    return 0;
}