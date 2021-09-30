#include <bits/stdc++.h>
using namespace std;
const int N = 4;
void getCofactor(int mat[N][N], int temp[N][N], int p, int q, int n)
{
    int i = 0, j = 0;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row != p && col != q)
            {
                temp[i][j++] = mat[row][col];
            }
            if (j == n - 1)
            {
                j = 0;
                i++;
            }
        }
    }
}
int determinant(int mat[N][N], int n)
{
    int D = 0;
    if (n == 1)
    {
        return mat[0][0];
    }
    int temp[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            temp[i][j] = 0;
    }
    int sign = 1;
    for (int i = 0; i < n; i++)
    {
        getCofactor(mat, temp, 0, i, n);
        D += mat[0][i] * sign * determinant(temp, n - 1);
        sign = -sign;
    }
    return D;
}

int main()
{
    int mat[N][N] = {{1, 0, 2, -1},
                     {3, 0, 0, 5},
                     {2, 1, 4, -3},
                     {1, 0, 5, 0}};
    cout << determinant(mat, N) << endl;
    return 0;
}