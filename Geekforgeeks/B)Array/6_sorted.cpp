#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool op(int arr[], int size)
{
    for(ll i=0;i<size-1;i++)
    {
        if(arr[i]>arr[i+1])
        return 0;
    }
    return 1;
}
int main()
{
    int arr[] = {3,26,100};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<op(arr, size)<<endl;
    return 0;
}