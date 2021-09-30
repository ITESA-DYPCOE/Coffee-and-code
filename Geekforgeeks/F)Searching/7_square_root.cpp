#include<bits/stdc++.h>
using namespace std;
int sqaure_root(int x)
{
    int l=0,r=x;
    int ans=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(mid*mid==x)
        return mid;
        else if(mid*mid>x)
        r=mid-1;
        else if(mid*mid<x)
        {
            l=mid+1;
            ans=mid; //we need to find the largest number which satisfies mid*mid<x and hence we store it in a variable and output the last/largest value.
            //this is the condition when the number is not a perfect sqaure.
        }
    }
    return ans;

    //time complexity : O(logn)
    //space complexity: O(1)
    //So if we have a increasing function then we can use binary search to find its values.
}
int main(){
    cout<<sqaure_root(0)<<endl;
    return 0;
}