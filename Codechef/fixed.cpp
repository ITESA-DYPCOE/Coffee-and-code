//roshan raj
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(v) v.begin(),v.end()
const int mod = 1e9 + 7;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t)
    {
        t=t-1;
        int n,k;
        cin>>n>>k;
        if(n-k==1)
        {
            cout<<-1<<endl;
            continue;
        }
        if(n==k)
        {
            for(int i=1;i<=k;i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
            continue;
        }
        for(int i=1;i<=k;i++)
        {
            cout<<i<<" ";
        }
        for(int i=k+2;i<=n;i++)
        {
            cout<<i<<" ";
        }
        cout<<k+1<<endl;
    }
    return 0;
}
