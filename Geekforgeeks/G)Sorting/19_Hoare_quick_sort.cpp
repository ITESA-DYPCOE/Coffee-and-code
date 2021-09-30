/*Quick sort:
1)Divide and conquer algo. : divides the array in two parts and sorts those two parts independently. 
2)In merge sort the merge func is complex and in quick sort the partition func is complex.
3)Worst case : O(n^2) (vs merge's O(nlogn)).
4)Despite O(n^2) it is faster than merge sort as it is:
    a)In-place (lomuto&hoare's): we mean it does not create temporary arrays for partition but only uses func call stack for recursion.
    b)Hence cache friendly so it is considered faster than merge sort.
    c)Average case is O(nlogn).
    d)Tail recursive : but merge was not tail recursive since last thing was merge func not recursive call.
    (Tail recursive function will be converted to iterative loop by compiler optimisation)
5)Partition is the key func( Naive , lomuto , hoare ) : naive is the only stable one but it is not so efficient . And hoare's is the most efficient.
Eg: Many language use quick sort only when stability is not need for eg: cpp has two functions sort (which uses intrasort variation of quick sort) and stable sort .
But some lang like python and java use timsort which is a variation of merge sort.
So for stability merge sort is preferred.
*/
#include <bits/stdc++.h>
using namespace std;
int hoare_partition(int arr[], int l, int r)
{
    srand(time(nullptr));
    int p = rand() % (r - l + 1) + l; //generating random pivot to prevent worst case for sorted arrays.
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
    if (l < r)
    {
        int p = hoare_partition(arr, l, r);
        qsort(arr, l, p);     //we call for left half from l to p
        qsort(arr, p + 1, r); //we call for right halp from p+! to r
    }
}
/*
*In quick sort the main function is the partition function . Once the partition is done we just have to sort the two parts 
independently and we get the answer.
*And we sort the two part by recursively calling q_sort which recursively creates partitions and place greater elements 
on the right and lesser elements on the left side.

*We call for left half and right half differently for hoare's partition from lomuto's partition as
hoare's does not fix the pivot at its correct position rather it only creates partitions.

*Hoare's partition is very fast compared to lomuto but it is also not stable.

*Only the naive partitioning algo is stable.
*/
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