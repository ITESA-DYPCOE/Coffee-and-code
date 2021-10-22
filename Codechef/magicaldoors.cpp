#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(v) v.begin(),v.end()
const int mod = 1e9 + 7;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t)
    {
        t=t-1;
        string s;
        cin>>s;
        long long int grp0=0;
        long long int grp1=0;
        long long int cnt=0;
        for(int i=1;i<s.length();i++)
        {
            if ((s[i] == '1' and s[i - 1] != '1') or (s[i] == '0' and s[i - 1] != '0'))
                cnt++;
        }
        if(s[0]=='1')
        {
            cout<<cnt<<endl;
        }
        else
        {
            cout<<cnt+1<<endl;
        }
    }
    return 0;
}
