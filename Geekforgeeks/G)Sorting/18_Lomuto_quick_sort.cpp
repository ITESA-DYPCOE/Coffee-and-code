/*Quick sort:
1)Divide and conquer algo. : divides the array in two parts and sorts those two parts independently. 
2)In merge sort the merge func is complex and in quick sort the partition func is complex.
3)Worst case : O(n^2) (vs merge's O(nlogn)).
4)Despite O(n^2) it is faster than merge sort as it is:
    a)In-place (lomuto&hoare's): that means it does not create temporary arrays for partition but only uses func
    call stack for recursion.
    b)Hence cache friendly so it is considered faster than merge sort.
    c)Average case is O(nlogn).
    d)Tail recursive : but merge was not tail recursive since last thing was merge func not recursive call.
    (Tail recursive function will be converted to iterative loop by compiler optimisation)
5)Partition is the key func( Naive , lomuto , hoare ) : naive is the only stable one but it is not so efficient . 
And hoare's is the most efficient.
Eg: Many language use quick sort only when stability is not need for eg: cpp has two functions sort 
(which uses intrasort variation of quick sort) and stable sort . But some lang like python and java use timsort 
which is a variation of merge sort.
So for stability merge sort is preferred.
*/
#include <bits/stdc++.h>
using namespace std;
int lomuto(int arr[], int l, int r) //everytime the lomuto function is called we place the pivot in its correct position
{
    srand(time(nullptr));
    int p = rand() % (r - l + 1) + l; //generating random pivot to prevent worst case for sorted arrays.
    swap(arr[r], arr[p]);
    int s = l - 1; //denotes the ending of window containing elements smaller that pivot
    for (int i = l; i < r; i++)
    {
        if (arr[i] < arr[r])
        {
            s++;
            swap(arr[i], arr[s]);
        }
    }
    swap(arr[s + 1], arr[r]);
    return s + 1;
}
void qsort(int arr[], int l, int r)
{
    if (l < r)
    {
        int p = lomuto(arr, l, r); //lomuto partition puts the last element (pivot) in its correct position and the rest are sorted relative to the pivot
        qsort(arr, l, p - 1);      //now we individually sort all elements greater than pivot
        qsort(arr, p + 1, r);      //and less than pivot
    }
}
//We can compare quicksort to binary search tree as we consider the pivot element as root and place the smaller element on the left subtree and larger on the right subtree.
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