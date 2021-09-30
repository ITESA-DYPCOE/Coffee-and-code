#include <bits/stdc++.h>
using namespace std;
int chocolate(int arr[], int size, int m)
{
    if (m < size)
    {
        sort(arr, arr + size);
        int min_diff = arr[m - 1] - arr[0];
        for (int i = 1; i < size - (m - 1); i++)
        {
            min_diff = min(min_diff, arr[m - 1 + i] - arr[i]);
        }
        return min_diff;
        //Time complexity of the array is O(nlogn).
    }

    return -1;
}
int main()
{
    int arr[] = {3, 4, 1, 9, 56, 7, 9, 12};
    int size = sizeof(arr) / sizeof(int);
    int m = 5;
    /*In this question we are given an array which denotes the size of diff packets and we need to distribute 1 packets to 
    each student so that difference between the size of packets with max and min is smallest. 
    */
    cout << chocolate(arr, size, m) << endl;  

    return 0;
}