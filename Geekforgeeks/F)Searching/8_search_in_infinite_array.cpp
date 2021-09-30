#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int x, int l, int r)
{
    if (l > r)
    {
        return -1;
    }
    int mid = (l + r) / 2;
    if (arr[mid] < x)
    {
        return binary_search(arr, x, mid + 1, r);
    }
    else if (arr[mid] > x)
    {
        return binary_search(arr, x, l, mid - 1);
    }
    else
    {
        return mid;
    }
    /*
    Time complexity: O(logn)
    Space complexity: O(logn) due to function call overhead of logn recursive calls.
    */
}
int search_in_infinite(int arr[], int size, int x)   //this algorithm is commonly known as unbounded binary search
{
    if (arr[0] == x)
        return 0;

    int r = 1;
    while (arr[r] < x)
        r = 2 * r;
    
    //time complexity of the above loop is O(2*logn) (n is position)

    if (arr[r] == x)
        return r;

    return binary_search(arr, x, r / 2 + 1, r - 1); //time comp also O(logn)
    //we search between r/2+1 and r-1.

    //time complexity : O(logn)  (here n is the position)
    //space complexity : O(logn)
}
int main()
{
    int arr[] = {2, 4, 6, 7, 9, 10, 11, 14, 16, 18, 19, 20, 30, 40, 45, 46, 49, 51, 53, 55, 58, 60};
    int x = 2;
    int size = sizeof(arr) / sizeof(int);
    cout << search_in_infinite(arr, size, x) << endl;
    return 0;
}