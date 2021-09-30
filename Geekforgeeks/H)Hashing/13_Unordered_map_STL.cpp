#include<bits/stdc++.h>
using namespace std;
/*
Unordered map used to store key,value pair but difference from map being its implementation using hashing.
(Simple is implemented using red-black tree)

Another difference being map stores key in order but unordered doesnot.

So it is basically a map only with faster insert,delete and search(with O(1)).

TIME COMPLEXITIES:

O(1):
begin()
end()
size()
empty()

O(1) on average:
Searching:
count()
find()
[]
at

Deletion:
erase(key)

Insertion:
insert

insert()
*/
int main(){
    unordered_map <string,int> m;
    m["gfg"]=20;    //[] is a member access operator which returns a reference to the memory containing that key.
    m["ide"]=30;    //So if that key is present it return the reference to that key-val pair or else it adds that pair.
    //so here it will add the key :"gfg" to the map m and will return a reference to it at which we store our values.
    
    // m.at("abc")=24;
    //difference between [] and at is that if the element not present unordered map enter that value whereas at returns out of bound exception

    m.insert({"courses",15}); //standard insertion function for unordered maps
    for(auto x:m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    //The order in unordered map is random.
    cout<<endl;

    if(m.find("ide")!=m.end())  //this function finds for a particular key which if present return an unique iterator to the ending which is not present in the container.
    {
        cout<<"FOUND"<<endl;
    }
    else  //if it does not return m.end then key present.
    {
        cout<<"NOT FOUND"<<endl;
    }
    //find function return the iterator with the input key.
    cout<<endl;
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    //begin func we have rbegin which return reference to last element hence we can transverse in reverse order
    cout<<endl;

    if(m.count("ide")>0)   //return a value of the type size_t if the element present else returns 0.
    cout<<"FOUND"<<endl;
    else
    cout<<"NOT FOUND"<<endl;

    cout<<endl;
    cout<<m.size()<<endl;  //return the size of the map
    m.erase("ide");  //remove a element with the input key. Also we can pass an iterator to an element to this function.
    m.erase(m.begin(),m.end()); //also we can pass a range to this function to remove elements
    m.clear();
    cout<<m.size()<<endl;
    return 0;
}