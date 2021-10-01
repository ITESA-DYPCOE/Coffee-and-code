#include <bits/stdc++.h>
using namespace std;
void print(int *arr[], int m, int n)
{
    cout << "PRINTING USING PRINT FUNCTION: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";

        cout << endl;
    }
}
int main()
{
    int m = 3, n = 2;
    int *arr[m]; //creating array of pointer

    for (int i = 0; i < m; i++)
        arr[i] = new int[n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            arr[i][j] = i + j;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    print(arr,m,n);
    /*
    This method is quite similiar to the previous method only difference being that instead of creating double pntr we create an array
    of pointer (which is stored statically) and allocate spaces to each element of that array of pointer
    */
    return 0;
}