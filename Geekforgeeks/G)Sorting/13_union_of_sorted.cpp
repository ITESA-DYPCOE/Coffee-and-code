#include <bits/stdc++.h>
using namespace std;
void merging(int arr1[], int n1, int arr2[], int n2)
{
    int i1 = 0, i2 = 0;
    while (i1 < n1 && i2 < n2)
    {

        if (i1 > 0 && arr1[i1] == arr1[i1 - 1])
        {
            i1++;
            continue;
        }
        if (i2 > 0 && arr2[i2] == arr2[i2 - 1])
        {
            i2++;
            continue;
        }
        if (arr1[i1] > arr2[i2])
        {
            cout<<arr2[i2]<<" ";   
            i2++;
        }
        else if (arr1[i1] < arr2[i2])
        {
            cout<<arr1[i1]<<" ";
            i1++;
        }
        else
        {
            cout << arr1[i1] << " ";
            i1++;
            i2++;
        }
    }
    while(i1<n1)
    {
        cout<<arr1[i1]<<" ";
        i1++;
    }
    while(i2<n2)
    {
        cout<<arr2[i2]<<" ";
        i2++;
    }
    
}
int main()
{
    int arr1[] = {1,2,2,2,3,3,3,3,4,5,6,7,69,101};
    int n1 = sizeof(arr1) / sizeof(int);
    int arr2[] = {2,2,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,6,69};
    int n2 = sizeof(arr2) / sizeof(int);
    merging(arr1, n1, arr2, n2);
    return 0;
}