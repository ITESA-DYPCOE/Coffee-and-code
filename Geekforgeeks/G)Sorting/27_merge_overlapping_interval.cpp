#include<bits/stdc++.h>
using namespace std;
vector <pair<int,int>> merge(vector <pair<int,int>> inp)
{   
    sort(inp.begin(),inp.end());
    vector<pair<int,int>> out;
    int mini=inp[0].first,maxi=inp[0].second;
    for(int i=1;i<inp.size();i++)
    {
        if(inp[i].first<=maxi)
        {
            maxi=max(maxi,inp[i].second);
        }
        else
        {
            out.push_back(make_pair(mini,maxi));
            mini=inp[i].first;
            maxi=inp[i].second;
        }
    }
    out.push_back(make_pair(mini,maxi));
    return out;
}
int main(){
    vector <pair<int,int>> inp{{5,10},{3,15},{18,30},{2,7}};
    vector <pair<int,int>> out;
    out=merge(inp);
    for(auto elem:out)
    {
        cout<<elem.first<<" "<<elem.second<<endl;
    }
    return 0;
}