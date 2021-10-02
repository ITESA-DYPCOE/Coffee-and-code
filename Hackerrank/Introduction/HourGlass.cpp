
#include <bits/stdc++.h>
#include <limits.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr)
 {
// int n= sizeof(arr)/sizeof(arr[0]);
// int m = sizeof(arr[0])/sizeof(arr[0][0]);
// cout<<n<<""<<m;
   int s=0;
   long max=LONG_MIN;
for(int i=0;i<6;i++)
{
    for(int j=0;j<6;j++)
    {
        if(i+2<6 && j+2<6)
        {
            s=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
             if(s>=max)      
                {
                max= s;
                }
          
        }
          
            
    }
}

            
return max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}