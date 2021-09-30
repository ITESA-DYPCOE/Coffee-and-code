#include <bits/stdc++.h>
using namespace std;
double median(int arr1[], int n1, int arr2[], int n2)
{
    /*In this algorithm we basically divide the two arrays in two parts such that left part contains all the smaller elements and 
    right half contains all the bigger elements.
    We do binary search in the smaller array and try to find a index for which the above condition will be satisfied 
    min1=min element of right side of a1
    max1=max element of left side of a1
    min2=min element of right side of a2
    max2=max element of left side of a2
    All these elements are the boundary elements of arrays.
    */
    if (n1 < n2)
    {
        int begin1 = 0, end1 = n1;
        while (begin1 <= end1)
        {
            int i1 = (begin1 + end1) / 2;
            int i2 = (n1 + n2 + 1) / 2 - i1;
            //We use these ternary operators for corner cases which there is nothing on the left or right side.
            int min1 = (i1 == n1) ? INT_MAX : arr1[i1];
            int max1 = (i1 == 0) ? INT_MIN : arr1[i1 - 1];
            int min2 = (i2 == n2) ? INT_MAX : arr2[i2];
            int max2 = (i2 == 0) ? INT_MIN : arr2[i2 - 1];

            if (max1 <= min2 && max2 <= min1)
            {
                if ((n1 + n2) % 2)
                {
                    return static_cast<double>(max(max1, max2));
                }
                else
                {
                    return static_cast<double>((max(max1, max2) + min(min1, min2)) / 2.00);
                }
            }
            else if (max1 > min2)
                end1 = i1 - 1;
            else
                begin1 = i1 + 1;
        }
    }
    else
    {
        swap(n1, n2);
        swap(arr1, arr2);
        int begin1 = 0, end1 = n1;
        while (begin1 <= end1)
        {
            int i1 = (begin1 + end1) / 2;
            int i2 = (n1 + n2 + 1) / 2 - i1;
            int min1 = (i1 == n1) ? INT_MAX : arr1[i1];
            int max1 = (i1 == 0) ? INT_MIN : arr1[i1 - 1];
            int min2 = (i2 == n2) ? INT_MAX : arr2[i2];
            int max2 = (i2 == 0) ? INT_MIN : arr2[i2 - 1];

            if (max1 <= min2 && max2 <= min1)
            {
                if ((n1 + n2) % 2)
                {
                    return static_cast<double>(max(max1, max2));
                }
                else
                {
                    return static_cast<double>((max(max1, max2) + min(min1, min2)) / 2.00);
                }
            }
            else if (max1 > min2)
                end1 = i1 - 1;
            else
                begin1 = i1 + 1;
        }
        swap(n1, n2);
        swap(arr1, arr2);
    }
    return 0;

    /*The time complexity of the above code is O(log(n1)) where n1 is the size of the smaller array. The time complexity is this
    since we are doing binary search in the smaller array.
    */
}
int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int size1 = sizeof(arr1) / sizeof(int);
    int arr2[] = {7, 15, 25, 30, 35, 55, 65, 75, 85};
    int size2 = sizeof(arr2) / sizeof(int);
    cout << median(arr1, size1, arr2, size2) << endl;
    return 0;
}