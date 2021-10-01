#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    void sort012(int a[], int n)
    {
        int m = 0;
        int h = n - 1;
        int l = 0;
        while (m <= h)
        {
            if (a[m] == 0)
            {
                swap(a[l], a[m]);
                l++;
                m++;
            }
            else if (a[m] == 1)
            {
                m++;
            }
            else if (a[m] == 2)
            {
                swap(a[m], a[h]);
                h--;
            }
        }
    }
};

// { Driver Code Starts.
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends