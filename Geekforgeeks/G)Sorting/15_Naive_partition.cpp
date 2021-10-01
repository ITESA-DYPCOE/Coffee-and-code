#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int l,int r,int p)  //this solution is stable
{
    swap(arr[r],arr[p]);
    p=r;  //we shift pivot to the end so that swapping of pivot does not take place because then it will lead to pivot being changed
    int temp[r-l+1],index=0;
    for(int i=l;i<=r;i++)
    {
        if(arr[i]<=arr[p])
        {
            temp[index]=arr[i];
            index++;
        }
    }

    int res=l+index-1;
    for(int i=l;i<=r;i++)
    {
        if(arr[i]>arr[p])
        {
            temp[index]=arr[i];
            index++;
        }
    }
    for(int i=l;i<=r;i++)
    {
        arr[i]=temp[i];
    }
    return res;
    //Time complexity : theta(n)
    //Auxillary complexity : theta(n)
    //This algorithm is stable.
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main(){
    int arr[]={3,8,6,12,10,7};
    int p=1;
    int size=sizeof(arr)/sizeof(int);
    print(arr,size);
    partition(arr,0,size-1,p);
    print(arr,size);
    return 0;
}