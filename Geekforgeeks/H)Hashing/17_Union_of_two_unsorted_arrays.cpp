#include <bits/stdc++.h>
using namespace std;
int UnionOfArrays(int arr1[], int n1, int arr2[], int n2)
{
    unordered_set<int> s(arr1, arr1 + n1);
    for (int i = 0; i < n2; i++)
    {
        s.insert(arr2[i]);
    }
    for (auto elem : s)
    {
        cout << elem << endl;
    }
    return s.size();
}
int main()
{
    int arr1[] = {4, 5, 2, 5, 6};
    int size1 = sizeof(arr1) / sizeof(int);
    int arr2[] = {4, 5, 2, 5, 6, 3, 4, 6, 2, 2, 4};
    int size2 = sizeof(arr2) / sizeof(int);
    UnionOfArrays(arr1, size1, arr2, size2);
    return 0;
}