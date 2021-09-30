#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int b,int e)
{
    int ans=0;
    for(int i=b;i<=e;i++)
    {
        ans+=arr[i];
    }
    return ans;
}
int minPages(int arr[],int size,int k)
{
    if(k==1)
    {
        return sum(arr,0,size-1);
    }
    if(size==1)
    {
        return arr[0];
    }

    int res=INT_MAX;
    for(int i=1;i<size;i++)
    {
        res=min(res,max(minPages(arr,i,k-1),sum(arr,i,size-1)));
    }
    return res;

}
int main(){
    int a[]={10,20,30,40};
    int size=sizeof(a)/sizeof(int);
    cout<<minPages(a,size,2)<<endl;
    return 0;
}