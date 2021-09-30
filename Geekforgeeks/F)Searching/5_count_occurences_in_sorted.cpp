#include<bits/stdc++.h>
using namespace std;
int first_occ(int arr[],int n,int x)
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
            if(mid==0||arr[mid-1]!=arr[mid])
            return mid;
            else
            r=mid-1;
        }
    }
    return -1;
    //time complexity: O(logn)
    //auxillary space: O(1)
}
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
int count_of_occ(int arr[],int size,int x)
{
    int f=first_occ(arr,size,x);
    if(f==-1)
    return 0;

    int l=last_occ(arr,size,x);
    return l-f+1;
}
int main(){
    int arr[]={5,5,5,5,6,6,6,7,7,7,10,10,10,10};
    int x=6;
    int size=sizeof(arr)/sizeof(int);
    cout<<count_of_occ(arr,size,x);
    return 0;
}