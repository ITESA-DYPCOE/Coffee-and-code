#include <bits/stdc++.h>
#define ll long long
using namespace std;
void op(vector <ll> arr,int l,int r)
{
    vector <ll> sum(arr.size());
    sum.at(0)=arr.at(0);
    for(ll i=1;i<arr.size();i++)
    {
        sum.at(i)=arr.at(i)+sum.at(i-1);
    }
    ll ans=0;
    if(l!=0)
    {
        ans=sum.at(r)-sum.at(l-1);
    }
    if(l==0)
    {
        ans=sum.at(r);
    }
    cout<<ans<<endl;
}
int main()
{
    ll l,r;
    l=0;
    r=2;
    vector <ll> arr{2,8,3,9,6,5,4};
    op(arr,1,3);
    return 0;
}