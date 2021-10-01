#include<bits/stdc++.h>
using namespace std;
int count_ones(int arr[],int n)
{
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]==0)
        {
            l=mid+1;
        }
        else
        {
            if(mid==0||arr[mid-1]==0)
            return n-mid;
            else
            r=mid-1;
        }
    }
    return 0;
    //time complexity: O(logn)
    //auxillary space: O(1)
}
int main(){
    int arr[]={0,0,0,1,1};
    int size=sizeof(arr)/sizeof(int);
    cout<<count_ones(arr,size);
    return 0;
}