#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int x,int l,int r)
{
    if(l>r)
    {
        return -1;
    }
    int mid=(l+r)/2;
    if(arr[mid]<x)
    {
        return binary_search(arr,x,mid+1,r);
    }
    else if(arr[mid]>x)
    {
        return binary_search(arr,x,l,mid-1);
    }
    else
    {
        return mid;
    }
    /*
    Time complexity: O(logn)
    Space complexity: O(logn) due to function call overhead of logn recursive calls.
    */
}
int main(){
    int arr[]={10,15,20,30,40,50};
    int x=20;
    int size=sizeof(arr)/sizeof(int);
    cout<<binary_search(arr,x,0,size-1)<<endl;
    return 0;
}