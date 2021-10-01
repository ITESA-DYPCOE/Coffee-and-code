#include <bits/stdc++.h>
using namespace std;
void func(int n,int k=1)
{
    if (k==n)
    {
        cout<<k<<endl;
        return;
    }
    cout<<k<<" ";
    func(n,k+1);
}
int main()
{
    func(5);
    return 0;
}