#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t)
    {
        t=t-1;
        long long int l,r;
        cin>>l>>r;
        if(l%3==0)
        {
            l=l+0;
        }
        else
        {
            l=l+(3-(l%3));    
        }        
        r=r-(r%3);
        long long int diff=(r-l);
        cout<<(diff/3)+1<<endl;
    }

    return 0;
}
