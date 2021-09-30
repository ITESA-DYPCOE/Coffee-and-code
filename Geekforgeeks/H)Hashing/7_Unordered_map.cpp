#include<bits/stdc++.h>
using namespace std;
class uMap
{
    vector <pair<int,list<int>>> m;
    public:
    void insert(int key,int val)
    {
        int index=0;
        for(auto elem:m)
        {
            if(elem.first==key)
            {
                break;
            }
            index++;
        }
        if(index<m.size())
        {
            m[index].second.push_back(val);
        }
        else
        {
            list <int> ls;
            ls.push_back(val);
            m.push_back(make_pair(key,ls));
        }
    }
    bool searchKey(int key)
    {
        for(auto elem:m)
        {
            if(elem.first==key)
            {
                return 1;
            }
        }
        return 0;
    }
    void remove(int key,int val)
    {
        int index=0;
        for(auto elem:m)
        {
            if(elem.first==key)
            {
                break;
            }
            index++;
        }
        if(index<m.size())
        {
            m[index].second.remove(val);
        }
    } 

};
int main(){
    uMap m1;
    m1.insert(2,3);
    m1.insert(2,4);
    m1.insert(2,5);
    cout<<m1.searchKey(2)<<endl;
    cout<<m1.searchKey(5)<<endl;
    return 0;
}