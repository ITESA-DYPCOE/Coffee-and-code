#include<bits/stdc++.h>
using namespace std;
void print(vector<int> arr[], int m)
{
    cout << "PRINTING USING PRINT FUNCTION: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
            cout << arr[i][j] << " ";

        cout << endl;
    }
}
int main(){
    int m=3,n=2;
    vector<int> arr[m];  //this is an array of vectors 

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        arr[i].push_back(i+j);  //pushing elements in each vector belonging to the array of vectors.
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    print(arr,m);
    /*
    Adv: 
    *This vector has dynamic rows (different from dynamically allocated rows coz their size will remain fixed)
    *It is easy to pass to an function

    Disadv:
    Not as cache friendly 
    */
    return 0;
}