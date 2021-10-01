#include<bits/stdc++.h>
using namespace std;
/*
Unordered set: does not maintain any order of the elements in the set.

***********Internal working and time complexities***********

begin(),end()       (O(1))
cbegin(),cend()     (O(1))  (only diff being cbegin and cend return constant iterators)

insert(),erase(val),erase(it),find(),count()  (O(1) on average).

size(),empty()  (O(1))
In hashing we assume the keys get uniformly distributed so each hash will have constant keys associated with it hence 
these operations occurs in constant time.

****************APPLICATIONS*******************
Unordered sets are implement using hashing and hence it can perform search,insert,delete in O(1) time average and hence can
be used anywhere where we need this kind of functionality on keys.

*/
int main(){
    unordered_set <int> s;
    s.insert(10); //insert elements into the unord set
    s.insert(5);
    s.insert(15);
    s.insert(20);
    s.insert(20);
    s.insert(-5);
    for(auto it=s.begin();it!=s.end();it++)
    cout<<(*it)<<endl;  //using iterators to print the elements of unord set
    cout<<endl;
    cout<<s.size()<<endl;  //size of uset
    // s.clear();  //use to clear uset
    // cout<<s.size()<<endl;
    cout<<endl;
    if(s.find(15)!=s.end())   //return true and false if element present or not present.
    {
        cout<<true<<endl;
    }
    else
    {
        cout<<false<<endl;
    }

    cout<<s.count(15)<<endl;  //return 0 or 1 depending on the presence of element in the uset.
    //Also since unord set is a set it cannot contain repeating elements.
    cout<<endl;
    cout<<s.size()<<endl;
    s.erase(15);  //to erase an element we can directly pass the element
    cout<<s.size()<<endl;
    auto it=s.find(10);   //or we can find the element and pass the iterator to that function to remove it.
    s.erase(it); 
    cout<<s.size()<<endl;
    s.erase(s.begin(),s.end());   //also we can pass the range to the erase function to remove a set of elements.
    cout<<s.size()<<endl;
    return 0;
}