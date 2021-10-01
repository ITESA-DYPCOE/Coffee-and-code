#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < (n - 1); i++)
    {
        bool flag = 0;
        for (int j = 1; j < (n - i ); j++)
        {
            if (arr[j - 1] > arr[j])
            {
                flag = 1;
                swap(arr[j - 1], arr[j]);
            }
        }
        if (flag != 1)
            break;
    }
    //Time complexity O(n^2) but mgiht vary if array is somewhat or completely sorted
    //Also it is a stable and in place since it does not requirres any temp array sorting algorithm
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = {4, 7, 2, 3, 1, 9, 7, 5, 4};
    int n = sizeof(arr) / sizeof(int);
    bubble_sort(arr, n);
    print(arr, n);
    return 0;
}