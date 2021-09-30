#include<bits/stdc++.h>
using namespace std;
const int R=4,C=4;
void snake_pattern(int arr[R][C])
{
    for(int i=0;i<R;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<C;j++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        else
        {
            for(int j=C-1;j>=0;j--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
    }
    //Time complexity = theta(R*C)
}
int main(){
    int arr[R][C]={{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                   {13,14,15,16}};
                
    snake_pattern(arr);
    return 0;
}