#include <bits/stdc++.h>
using namespace std;
void merge(int inp[], int low, int mid, int high)
{
    int n1 = mid + 1 - low, n2 = high - mid;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++) //setting left array
        left[i] = inp[i + low];
    for (int i = 0; i < n2; i++) //setting right array
        right[i] = inp[i + mid + 1];
    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2) //merging and overiting the inp
    {
        if (left[i] <= right[j])
        {
            inp[k] = left[i];
            i++;
            k++;
        }
        else
        {
            inp[k] = right[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        inp[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        inp[k] = right[j];
        j++;
        k++;
    }
    //time complexity : theta(n) ,Auxillary space : theta(n)
}
void mergeSort(int arr[], int l, int r)
{
    if (r > l) //so atleast two elements must be present so as to divide the array
    {
        int m = l + (r - l) / 2;  //same as (l+r)/2 but we do this to present data overflow
        mergeSort(arr, l, m);     //recursively sorting left half
        mergeSort(arr, m + 1, r); //recursively sorting right half
        merge(arr, l, m, r);      //merge right and left half
    }
    //merge sort is stable
    //if we see the tree of merge sort we find that at each level the work done is theta(n) and there are theta(logn) levels
    // so the overall time complexity is theta(nlogn)
    /*Auxillary space in each step is theta(n) but overall auxillary space is also same since after each function call returns space 
    is deallocated and hence at a particular time max space occupied in ram is theta(n).*/
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = {3, 1, 5, 2, 3, 30, 11, 24, 65, 76, 21};
    int n = sizeof(arr) / sizeof(int);
    print(arr, n);
    mergeSort(arr, 0, n - 1);
    print(arr, n);
    return 0;
}