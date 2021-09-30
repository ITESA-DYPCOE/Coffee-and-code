#include <bits/stdc++.h>
using namespace std;
class MyHash
{
    int b;
    list<int> *table;

public:
    MyHash(int a)
    {
        b = a;
        table = new list<int>[b];
    }
    void insert(int elem)
    {
        table[elem % b].push_back(elem);
    }
    bool search(int elem)
    {
        for (auto cnt : table[elem % b])
        {
            if (cnt == elem)
            {
                return 1;
            }
        }
        return 0;
    }
    void remove(int elem)
    {
        table[elem % b].remove(elem);
    }
    void print()
    {
        for (int i = 0; i < b; i++)
        {
            for (auto elem : table[i])
            {
                cout << elem << " ";
            }
            cout << endl;
        }
    }
    ~MyHash()
    {
        delete [] table;
    }
};
int main()
{
    MyHash hash1{7};
    hash1.insert(70);
    hash1.insert(71);
    hash1.insert(56);
    hash1.insert(9);
    // hash1.print();
    hash1.insert(72);
    cout << hash1.search(9) << endl;
    hash1.remove(9);
    cout << hash1.search(9) << endl;
    return 0;
}