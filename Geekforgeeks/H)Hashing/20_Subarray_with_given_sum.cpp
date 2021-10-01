#include <bits/stdc++.h>
#define ll long long
#define rep(i, t) for (ll i = 0; i < t; i++)
using namespace std;
bool subarrayWithGivenSum(vector<ll> v,int given_sum)
{
    unordered_set<ll> s;
    ll sum=0;
    for (auto elem : v)
    {
        sum += elem;
        if (s.find(sum-given_sum) != s.end())
        {
            return true;
        }
        if(sum==given_sum)  //this condition is used to check for the condn's like {3,2,5,6} that is requirred sum at thr beginning.
        {
            return true;
        }
        s.insert(sum);
    }
    return false;
    //Time complexity : O(n)
    //Auxillary space : O(n)
}
int main()
{
    vector<ll> vect{3,2,5,6};
    ll sum=10;
    cout << subarrayWithGivenSum(vect,sum) << endl;
    return 0;
}