#include <bits/stdc++.h>
#define ll long long
#define rep(i, t) for (ll i = 0; i < t; i++)
using namespace std;
bool subarrayWithGivenSum(vector<ll> v)
{
    unordered_set<ll> s;
    ll sum = 0;
    for (auto elem : v)
    {
        sum += elem;
        if (s.find(sum) != s.end())
        {
            return true;
        }
        if(sum==0)  //this condition is used to check for the condn's like {4,-1,-3,5}
        {
            return true;
        }
        s.insert(sum);
    }
    return false;
    //Time complexity : O(n)
}
int main()
{
    vector<ll> vect{-1,4,-3,5,2};
    cout << subarrayWithGivenSum(vect) << endl;
    return 0;
}