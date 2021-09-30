#include <bits/stdc++.h>
using namespace std;
int sub_sum(int arr[],int n,int sum)
{
    if(n==0)
    {
        return (sum==0)?1:0; 
    }
    return sub_sum(arr,n-1,sum-arr[n-1])+sub_sum(arr,n-1,sum);
}
int main()
{
    int arr[]={10,20,15};
    int sum=25;
    cout<<"NUMBER OF SUBSETS WITH SUM "<<sum<<" ARE :"<<sub_sum(arr,sizeof(arr)/sizeof(int),sum)<<endl;
    return 0;
}