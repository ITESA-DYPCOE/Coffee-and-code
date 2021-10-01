#include<bits/stdc++.h>
using namespace std;
bool insert(vector <bool> &table,int elem)
{
    table[elem]=1;
    return 1;
}
bool remove(vector <bool> &table,int elem)
{
    table[elem]=0;
    return 0;
}
bool search(vector <bool> &table,int elem)
{
    return table[elem];
}
int main(){
    vector <bool> table(1000,0);
    insert(table,10);
    insert(table,20);
    insert(table,119);
    cout<<search(table,10)<<endl;
    cout<<search(table,20)<<endl;
    remove(table,119);
    cout<<search(table,119)<<endl;
    /*
    Problems with doing this:
    1)Large amount of space which might not even be used.
    2)Cannot have floating pt keys.
    3)Cannot have string keys. 
    */
    return 0;
}