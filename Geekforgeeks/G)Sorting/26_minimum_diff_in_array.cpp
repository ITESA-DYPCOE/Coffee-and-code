#include<bits/stdc++.h>
using namespace std;
int getmindiff(int arr[],int n)
{
    sort(arr,arr+n);
    int min_diff=INT_MAX;
    for(int i=1;i<n;i++)
    {
        min_diff=min(min_diff,abs(arr[i]-arr[i-1]));
    }
    return min_diff;
    //Time complexity : O(nlogn)
    //Auxillary space : O(1)
}
int main(){
    int arr[]={5,3,8};
    int size=sizeof(arr)/sizeof(int);
    cout<<getmindiff(arr,size)<<endl;
    return 0;
}
