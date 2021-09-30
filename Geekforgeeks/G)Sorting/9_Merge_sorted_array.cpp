#include <bits/stdc++.h>
using namespace std;
void merging(int arr1[], int n1, int arr2[], int n2)
{
    int i1 = 0, i2 = 0;
    while (i1 < n1 && i2 < n2)  //this loop will completely print one of the loop and rest will be bigger than all the printed elements 
    {
        if (arr1[i1] <= arr2[i2])   //equal to for stability so that first array element appear first
        {
            cout << arr1[i1] << " ";
            i1++;
        }
        else
        {
            cout << arr2[i2] << " ";
            i2++;
        }
    }
    //all the rest of bigger elements will be print by the following loops
    while (i1 < n1)
    {
        cout << arr1[i1] << " ";
        i1++;
    }
    while (i2 < n2)
    {
        cout << arr2[i2] << " ";
        i2++;
    }
    //this is an efficeint solution of theta(n1+n2) time complexity and O(1) auxillary space
}
int main()
{
    int arr1[]={3,5,8,10,15,21};
    int n1=sizeof(arr1)/sizeof(int);
    int arr2[]={1,2,5,6,9,11};
    int n2=sizeof(arr2)/sizeof(int);
    merging(arr1,n1,arr2,n2);
    return 0;
}