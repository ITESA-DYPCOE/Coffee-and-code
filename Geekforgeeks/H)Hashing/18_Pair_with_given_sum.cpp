#include<bits/stdc++.h>
#define ll long long
#define rep(i,t) for(ll i=0;i<t;i++)
using namespace std;
/*
We cannot solve this problem by inserting all the elements into the set and then search for pair
as in the case sum/2=elem it will return true even if elem is present only once in the array.
*/
bool  pairWithSum(vector <ll> v,int sum)
{
    unordered_set <ll> s;
    for(auto elem:v)
    {
        if(s.find(sum-elem)==s.end())
        {
            s.insert(elem);
        }
        else 
        {
            return true;
        }
    }
    return false;
}
int main(){
    vector <ll> vect{3,2,8,15,-8};
    int sum=17;
    cout<<pairWithSum(vect,sum)<<endl;
    return 0;
}