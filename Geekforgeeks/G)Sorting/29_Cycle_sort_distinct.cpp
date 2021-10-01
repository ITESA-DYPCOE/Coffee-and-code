#include <bits/stdc++.h>
using namespace std;
/*
Cycle sort:
1)O(n^2) or theta(n^2) time requirred in the worst case.
2)This algo does minimum memory writes. So if we have memory like EEPROM where write is costly in those cases we use cycle sort.
3)Inplace and not stable.
* * * * * * *

4) Uses to solve questions like min swaps requirred to sort an array

* * * * * * *
*/
int cycle_sort_distinct(int arr[], int n)
{
    int writes = 0;
    for (int cs = 0; cs < (n - 1); cs++)
    {
        int item = arr[cs];
        int pos = cs;
        for (int i = cs + 1; i < n; i++)
        {
            if (arr[i] < item)
                pos++;
        }
        if (pos == cs)
            continue;

        while (item == arr[pos])
            pos += 1;

        if (pos != cs)
        {
            swap(item, arr[pos]);
            writes++;
        }
        while (pos != cs)
        {
            pos = cs;
            for (int i = cs + 1; i < n; i++)
            {
                if (arr[i] < item)
                    pos++;
            }
            if (arr[pos] == item)
            {
                pos++;
            }
            else
            {
                swap(arr[pos], item);
                writes++;
            }
        }
    }
    return writes;
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = {10, 20, 10, 10, 10, 10, 20, 30, 40, 50, 10};
    int size = sizeof(arr) / sizeof(int);
    print(arr, size);
    cycle_sort_distinct(arr, size);
    print(arr, size);
    return 0;
}