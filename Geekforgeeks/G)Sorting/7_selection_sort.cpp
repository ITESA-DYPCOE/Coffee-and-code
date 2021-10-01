#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int mini=i;
        for(int j=i;j<n;j++)
        {
            if(arr[mini]>arr[j])
            {
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
    }
    //Time complexity theta(n^2) and also it always takes this much time
    //Does less memory write compared to quick,merge,insertion etc. 
    //But cycle sort best for memory write.
    //Memory write is harmful for  EEPROM as it decreases its life term.
    //Basic idea for heapsort
    //Not stable but in place
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = {4, 7, 2, 3, 1, 9, 7, 5, 4};
    int n = sizeof(arr) / sizeof(int);
    selection_sort(arr, n);
    print(arr, n);
    return 0;
}