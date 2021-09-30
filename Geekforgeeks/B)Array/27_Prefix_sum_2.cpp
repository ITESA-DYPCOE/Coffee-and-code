#include <bits/stdc++.h>
#define ll long long
using namespace std;
void op(vector <ll> arr)
{
    ll n=arr.size();
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    ll sumi=0;
    for(ll i=0;i<n;i++)
    {
        if((2*sumi)==sum-arr[i])
        {
            cout<<"YES at "<<i+1<<endl;
            return ;
        }
        sumi+=arr[i];
    }
    cout<<"NO"<<endl;
}
int main()
{
    vector <ll> arr{3,6,-9,8,20,6,2};
    op(arr);
    return 0;
}