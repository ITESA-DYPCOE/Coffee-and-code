/*
The idea for tail call elimination is to optimise the code. Most of the time modern compiliers automatically do tail call elimination.

The reason for this is that when the function is tail recursive so there is no need for the parent function to be stored in the stack hence it is better 
to just use a goto statement after changing the required variables. This leads to reduced space complexity.

So we do tail call elimination to reduce extra space required for quick sort.

What is even better it to check the number of elements in the left and right part and for the smaller part we do recursion for rest we use goto.
*/
#include <bits/stdc++.h>
using namespace std;
int hoare_partition(int arr[], int l, int r)
{
    srand(time(nullptr));
    int p = rand() % (r - l + 1) + l; 
    swap(arr[l], arr[p]);
    int pivot = arr[l];
    int i = l - 1, j = r + 1;
    while (1)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
            return j;

        swap(arr[i], arr[j]);
    }
}
void qsort(int arr[], int l, int r)
{
    begin:
    if (l < r)
    {
        int p = hoare_partition(arr, l, r);
        qsort(arr, l, p);     
        l=p+1;
        goto begin;
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = {8, 4, 7, 9, 3, 10, 5};
    int size = sizeof(arr) / sizeof(int);
    print(arr, size);
    qsort(arr, 0, size - 1);
    print(arr, size);
    return 0;
}