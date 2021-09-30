#include <bits/stdc++.h>
using namespace std;
int peak_element(int arr[], int size)
{
    // if there is an independenet array then it will always have peak element.
    int l = 0, r = size - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == size - 1 || arr[mid + 1] <= arr[mid])) /* we need one of two in both
                                                                                                     cases to be true.*/
            return arr[mid];

        if (mid > 0 && arr[mid - 1] >= arr[mid])  //if left side is bigger than left contains a peak
            r = mid - 1;
        else  //else right contains a peak
            l = mid + 1;
    }
    return -1;

    //if mid is not the peak and one of the two elements near it is bigger than mid then we can surely say that side contains an peak
    //time complexity : O(logn)
    //auxillary space : O(1)
}
int main()
{
    int arr[] = {5, 10, 30, 40,600, 130, 150, 670};
    int size = sizeof(arr) / sizeof(int);
    cout << peak_element(arr, size);
    return 0;
}