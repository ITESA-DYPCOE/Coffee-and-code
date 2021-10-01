#include <bits/stdc++.h>
using namespace std;

bool checkSort(int a[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (a[0] > a[1])
    {
        return false;
    }
    bool issmallsort = checkSort(a + 1, size - 1);
    return issmallsort;
}

int main()
{
    int a[] = {1, 2, 6, 4, 5};
    cout << checkSort(a, 5) << endl;
    return 0;
}