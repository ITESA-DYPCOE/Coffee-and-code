#include<bits/stdc++.h>
using namespace std;
int max_guests(int arr[],int dep[],int n)
{
    sort(arr,arr+n);
    sort(dep,dep+n);
    int i=0,j=0,curr=0,res=0;
    int max_arr=0,max_dep=0;
    //This function is similiar to the merge function of merge sort.
    while(i<n&&j<n)
    {
        if(arr[i]<=dep[j])  //we this is true then 1 guest arrives
        {
            curr++;
            i++;
        } 
        else  //or else 1 person departs
        {
            curr--;
            j++;
        }
        if(res<curr)
        {
            res=curr;
            max_arr=arr[i-1];
            max_dep=dep[j];
        }
    }
    cout<<max_arr<<" "<<max_dep<<endl;
    return res;
    //Time complexity : O(nlogn)
    //Space complexity : O(1)
}
int main(){
    int arr[]={900,600,700};
    int dep[]={1000,800,730};
    int size=sizeof(arr)/sizeof(int);
    cout<<max_guests(arr,dep,size)<<endl;
    return 0;
}