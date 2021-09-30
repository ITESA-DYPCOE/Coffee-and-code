#include <bits/stdc++.h>
using namespace std;
const int R = 3, C = 5;
void spiral(int arr[R][C])
{
    int left = 0, right = C - 1, top = 0, bottom = R - 1; //we maintain these 4 variables to print the matrix
    while (left <= right && top <= bottom)
    {
        for (int i = left; i <= right; i++)
            cout << arr[top][i] << " ";
        top++;

        for (int i = top; i <= bottom; i++)
            cout << arr[i][right] << " ";
        right--;
        if (top <= bottom) //requerred when only I row left
        {
            for (int i = right; i >= left; i--)
                cout << arr[bottom][i] << " ";
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                cout << arr[i][left] << " ";
            left++;
        }
    }

    //we are traversing each element only once so time complexity is theta(R*C)
}
int main()
{
    int arr[R][C] = {{6, 6, 2, 28, 2}, {12, 26, 3, 28, 7}, {22, 25, 3, 4, 23}};
    spiral(arr);
    return 0;
}