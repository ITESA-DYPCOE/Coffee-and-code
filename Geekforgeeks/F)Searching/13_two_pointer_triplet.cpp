#include <bits/stdc++.h>
using namespace std;
int sum(int arr[], int size, int x)
{
    for (int i = 0; i < size; i++)
    {
        int xf = x - arr[i];
        int l = i+1, r = size - 1;
        while (l < r)
        {
            if (l == i)
                l++;
            if (r == i)
                r--;

            int sum = arr[l] + arr[r];
            if (sum > xf)
                r--;
            else if (sum < xf)
                l++;
            else
            {
                printf("%d+%d+%d\n", arr[i], arr[l], arr[r]);
                return 1;
            }
        }
    }
    return 0;
    //Time complexity : O(n^2)
    //Space complexity : O(1)

    //For sorted pair : we use two pointer approach since that take O(n) time.
    //For unsorted pair : we use hashing since two pointer with sorting will require O(nlogn) time
    //For sorted triplet finding: two pointer
    //For unsorted triplet finding: sorting then two pointer
}
int main()
{
    int arr[] = {2, 4, 8, 9, 20, 40};
    int size = sizeof(arr) / sizeof(int);
    int wsum = 32;
    cout << sum(arr, size, wsum) << endl;
    return 0;
}