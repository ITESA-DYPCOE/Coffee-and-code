#include <bits/stdc++.h>
using namespace std;
const int R = 4, C = 4;
void searching(int arr[R][C], int x)
{
    /*
    This is an efficient solution of O(R+C) time complexity and we take the use of the fact that the array is sorted row and columnwise

    We either start from top right or bottom left (coz only then we can have both smaller and bigger elements )move accoringdly if element to be search is smaller or bigger
    */
    if (x > arr[0][0] && x < arr[R - 1][C - 1]) //if element is not in this range then it is surely not present in the 2D matrix
    {
        int i = C - 1, j = 0;
        while (i > -1 && j < R)
        {
            if (arr[i][j] < x)
            {
                j++;
            }
            else if (arr[i][j] > x)
            {
                i--;
            }
            else
            {
                cout << "ELEMENT FOUND AT (" << i << "," << j << ")" << endl;
                return;
            }
        }
    }
    cout << "ELEMENT NOT FOUND" << endl;
    //Time complexity is O(R+C)
}
int main()
{
    int arr[R][C] = {{10, 20, 30, 40}, 
                     {15, 25, 35, 45}, 
                     {27, 29, 37, 48}, 
                     {32, 33, 39, 50}};
    searching(arr, 29);
    return 0;
}