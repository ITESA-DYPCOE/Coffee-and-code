#include<bits/stdc++.h>
using namespace std;
int last_occ(int arr[],int n,int x)
{
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]<x)
        {
            l=mid+1;
        }
        else if(arr[mid]>x)
        {
            r=mid-1;
        }
        else
        {
            if(mid==(n-1)||arr[mid+1]!=arr[mid])
            return mid;
            else
            l=mid+1;
        }
    }
    return -1;
    //time complexity: O(logn)
    //auxillary space: O(1)
}
int main(){
    int arr[]={10,10,10,10,15,15,20,20,20,100,100};
    int x=100;
    int size=sizeof(arr)/sizeof(int);
    cout<<last_occ(arr,size,x)<<endl;
    return 0;
}