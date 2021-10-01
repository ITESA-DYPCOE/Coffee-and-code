#include <bits/stdc++.h>
using namespace std;
int sum(int arr[], int size, int x)
{
    int cntr = 0;
    for (int i = 0; i < size; i++)
    {
        int xf = x - arr[i];
        int l = i + 1, r = size - 1;
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
                cntr++;
                l++;
                r--;
            }
        }
    }
    return cntr;
    //Time complexity : O(n^2)
    //Space complexity : O(1)

}
int main()
{
    int arr[] = {2, 3, 4, 8, 9,10, 20, 40};
    int size = sizeof(arr) / sizeof(int);
    int wsum = 32;
    cout << sum(arr, size, wsum) << endl;
    return 0;
}