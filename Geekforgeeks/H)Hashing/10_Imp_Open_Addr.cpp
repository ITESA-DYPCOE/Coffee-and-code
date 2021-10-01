#include <bits/stdc++.h>
using namespace std;
class myHash
/*
To implement open addressing the standand libraries take NULL instead of -1 and for -2 they take a dummy
node and check for delete node by comparing the pointers or references with that dummy node.
*/
{
    int cap, size;
    int *arr;

public:
    myHash(int s)
    {
        cap = s;
        size = 0;
        arr = new int[s];
        for (int i = 0; i < s; i++)
            arr[i] = -1;
    }
    bool insert(int key)
    {
        if (size < cap)
        {
            int hash1 = key % cap, hash2 = 1;
            int hash = hash1;
            while (arr[hash] != -1 && arr[hash] != -2 && arr[hash] != key)
            {
                hash = (hash + hash2) % cap;
            }
            if (arr[hash] == key)
            {
                return false;
            }
            else
            {

                arr[hash] = key;
                size++;
                return true;
            }
        }
        else
        {
            cout << "HASH TABLE IS FULL" << endl;
            return 0;
        }
    }
    bool search(int key)
    {
        int hash1 = key % cap, hash2 = 1;
        int hash = hash1;
        do
        {
            if (arr[hash] == key)
                return 1;

            hash = (hash + hash2) % cap;
        } while (arr[hash] != -1 && hash != hash1);
        return 0;
    }
    bool erase(int key)
    {
        if (size != 0)
        {
            int hash1 = key % cap, hash2 = 1;
            int hash = hash1;
            do
            {
                if (arr[hash] == key)
                {
                    arr[hash] = -2;
                    return true;
                }

                hash = (hash + hash2) % cap;
            } while (arr[hash] != -1 && hash != hash1);
            size--;
            return false;
        }
        else
        {
            cout << "SORRY THE HASH IS EMPTY" << endl;
            return false;
        }
    }
    void print()
    {
        for (int i = 0; i < cap; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    ~myHash()
    {
        delete[] arr;
    }
};
int main()
{
    //Here we do LINEAR PROBING
    myHash h1{7};
    h1.insert(49);
    h1.insert(56);
    h1.print();
    h1.insert(63);
    h1.print();
    h1.insert(72);
    h1.print();
    cout << h1.search(56) << endl;
    h1.erase(56);
    h1.print();
    cout << h1.search(56) << endl;
    cout << h1.search(63) << endl;
    h1.insert(77);
    h1.print();
    return 0;
}