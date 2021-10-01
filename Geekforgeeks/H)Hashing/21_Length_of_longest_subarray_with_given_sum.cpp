#include <bits/stdc++.h>
#define ll long long
#define rep(i, t) for (ll i = 0; i < t; i++)
using namespace std;
int LengthOfLongestSubarrayWithGivenSum(vector<ll> v,int given_sum)
{
    unordered_map<ll,ll> s;
    ll sum=0;
    for (auto elem : v)
    {
        sum += elem;
        if(s.find(sum-given_sum))
    }
    return false;
    //Time complexity : O(n)
    //Auxillary space : O(n)
}
int main()
{
    vector<ll> vect{3,2,5,6};
    ll sum=10;
    cout << LengthOfLongestSubarrayWithGivenSum(vect,sum) << endl;
    return 0;
}