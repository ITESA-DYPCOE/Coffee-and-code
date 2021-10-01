#include <bits/stdc++.h>
using namespace std;
const int R = 3, C = 2;
void boundary(int arr[R][C])
{
    for (int i = 0; i < C; i++)
    {
        cout << arr[0][i] << " ";
    }
    for (int i = 1; i < R - 1; i++)
    {
        cout << arr[i][C - 1] << " ";
    }
    if (R > 1)
    {
        for (int i = C - 1; i >= 0; i--)
        {
            cout << arr[R - 1][i] << " ";
        }
    }
    if (C > 1)
    {
        for (int i = R - 2; i > 0; i--)
        {
            cout << arr[i][0] << " ";
        }
    }
    // Time complexity is theta(R+C)
}
int main()
{
    int arr[R][C] = {{1,2},{3,4},{5,6}};

    boundary(arr);
    return 0;
}