#include <bits/stdc++.h>
using namespace std;
void merge(int inp[], int low, int mid, int high)
{
    int n1 = mid + 1 - low, n2 = high - mid;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++) //setting left array
        left[i] = inp[i + low];
    for (int i = 0; i < n2; i++) //setting right array
        right[i] = inp[i + mid + 1];
    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2) //merging and overiting the inp
    {
        if (left[i] <= right[j])
        {
            inp[k] = left[i];
            i++;
            k++;
        }
        else
        {
            inp[k] = right[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        inp[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        inp[k] = right[j];
        j++;
        k++;
    }
    //time complexity : theta(n) ,Auxillary space : theta(n)
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr1[] = {1, 3, 5, 6, 10, 4, 6, 8, 11};
    int n1 = sizeof(arr1) / sizeof(int);
    int low = 0, mid = 4, high = n1 - 1;
    merge(arr1, low, mid, high);
    print(arr1, n1);
    return 0;
}