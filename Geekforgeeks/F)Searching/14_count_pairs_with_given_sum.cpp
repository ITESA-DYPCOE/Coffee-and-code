#include <bits/stdc++.h>
using namespace std;
int sum(int arr[],int size,int x)
{
    int l=0,r=size-1; 
    int cntr=0;
    while(l<r)
    {
        int sum=arr[l]+arr[r];  
        if(sum>x)
        r--;
        else if(sum<x)
        l++;
        else
        {
            cntr++;
            l++;
            r--;
        }
    }
    return cntr;

}
int main()
{
    int arr[] = {2,3,4,6,6,8,9,10};
    int size = sizeof(arr) / sizeof(int);
    int wsum=12;
    cout<<sum(arr,size,wsum)<<endl;
    return 0;
}