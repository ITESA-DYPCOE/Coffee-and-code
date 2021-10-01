#include <bits/stdc++.h>
using namespace std;
void segregateIntoTwoParts(int arr[], int n) //this problem is basically partition problem of quick sort
{
    //We can use both hoare's and lomuto's partition to solve this problem
    int i = -1, j = n;
    while (1)
    {
        do
        {
            i++;
        } while (arr[i]  == 0); //cond for left sub-array
        do
        {
            j--;
        } while (arr[j]  != 0); //cond for right sub-array
        if (i >= j)
            break;

        swap(arr[i], arr[j]);
    }
    //Time complexity : theta(n)
    //Auxillary space : O(1)
    //Single transversal
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = {0,1,0,1,1};
    int size = sizeof(arr) / sizeof(int);
    segregateIntoTwoParts(arr, size);
    print(arr, size);
    return 0;
}