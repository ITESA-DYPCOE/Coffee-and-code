#include <bits/stdc++.h>
#define ll long long
using namespace std;
int op(int arr[], int size,int x)
{
    for(ll i=0;i<size;i++)
    {
        if(arr[i]==x)
        return i+1;
    }
    return -1;
}
int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int size = 6;
    op(arr, size,6);
    return 0;
}