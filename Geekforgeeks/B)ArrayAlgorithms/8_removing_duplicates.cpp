#include <bits/stdc++.h>
#define ll long long
using namespace std;
void op(int arr[], int size)
{
    // sort(arr,arr+size); if we donot want any element no matter its index we include this.
    ll cntr=1;
    for(ll i=1;i<size;i++)
    {
        if(arr[i]!=arr[cntr-1])
        {
            arr[cntr]=arr[i];
            cntr++;
        }
    }
}
int main()
{
    int arr[] = {10,10,10,10,10,20};
    int size = sizeof(arr) / sizeof(arr[0]);
    op(arr, size);
    for (ll i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}