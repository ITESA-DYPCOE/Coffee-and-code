#include <bits/stdc++.h>
using namespace std;
int searching(int arr[], int x, int n)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)   //if x is the mid element
            return mid;

        if (arr[l] < arr[mid])   //if the left part is sorted 
        {
            if (arr[l] <= x && arr[mid] > x)  // if x is in this range of sorted part 
            {
                r = mid - 1;  //we search this part
            }
            else
            {
                l = mid + 1;  //else we search the right half.
            }
        }
        else    //if the right part is sorted
        {
            if (arr[mid] < x && arr[r] >= x)   //if x is the range of sorted part
            {
                l = mid + 1;  //we search this part 
            }
            else
            {
                r = mid - 1;  //else we search the left half.
            }
        }
    }
    return -1;
    // time complexity : O(logn)
    // space complexty: O(1)
}
int main()
{
    int arr[] = {100, 500, 10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(int);
    int x = 50;
    cout << searching(arr, x, size) << endl;
    return 0;
}//