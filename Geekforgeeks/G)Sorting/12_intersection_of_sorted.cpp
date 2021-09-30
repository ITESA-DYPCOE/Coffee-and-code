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
        if (arr1[i1] > arr2[i2])
        {
            i2++;   
        }
        else if (arr1[i1] < arr2[i2])
        {
            i1++;
        }
        else
        {
            cout << arr1[i1] << " ";
            i1++;
            i2++;
        }
    }
}
int main()
{
    int arr1[] = {10,20,20,40,60};
    int n1 = sizeof(arr1) / sizeof(int);
    int arr2[] = {2,20,20,20};
    int n2 = sizeof(arr2) / sizeof(int);
    merging(arr1, n1, arr2, n2);
    return 0;
}