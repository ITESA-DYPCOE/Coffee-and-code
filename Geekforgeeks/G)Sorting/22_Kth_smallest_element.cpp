#include <bits/stdc++.h>
using namespace std;
int lomuto(int arr[], int l, int r)
{
    srand(time(nullptr));
    int p = rand() % (r - l + 1) + l;
    swap(arr[r], arr[p]);
    int s = l - 1;
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
int kthsmallest(int arr[], int n, int k)
{
    int l = 0, r = n - 1;
    if (k <= n)
    {
        while (l <= r)
        {
            int p = lomuto(arr, l, r); //Lomuto places the pivot at its correct position
            if (p == (k - 1))          //when the pivot is the requirred element we k=just return it
                return arr[p];
            else if (p > k - 1) //if not we go to the left or the right.
                r = p - 1;
            else
                l = p + 1;
        }
    }
    //In this function we do not even need to recur.
    //This solution is O(n^2) in worst case and O(n) in avg case. The avg is based on the fact that our lomuto picks random element .
    //This algorithm is called quick select.
    //This algo changes the array as it partially sorts the array. 
    return -1;
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = {10, 5, 30, 2};
    int size = sizeof(arr) / sizeof(int);
    print(arr, size);
    cout << kthsmallest(arr, size, 2) << endl;
    print(arr, size);
    return 0;
}