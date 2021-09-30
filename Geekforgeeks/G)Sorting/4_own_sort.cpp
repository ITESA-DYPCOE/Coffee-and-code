#include <bits/stdc++.h>
using namespace std;
struct point
{
    int x, y;
};
bool myCmp(point p1, point p2)
{
    return p1.x > p2.x;
}
int main()
{
    point arr[] = {{1, 2}, {4, 1}, {5, 2}, {3, 4}};
    sort(arr, arr + 4, myCmp);  //in the sort function we can pass our own function according to which it should sort
    for (auto elem : arr)
        cout << elem.x << " " << elem.y << endl;
    return 0;
}
//Internal working of sort func : time complexity is O(nlogn) and internally uses introsort(hybrid of quicksort,heapsort,insertion sort) 
