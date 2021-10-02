#include<iostream>
#include<vector>
using namespace std;

//Implementation of Stack using vector
template<typename T>
class Stack{
    vector<T>v;
    public:
    void push(T data){
        v.push_back(data);
    }
    bool empty(){
        return v.size()==0;
    }
    void pop(){
        if(!empty()){
            v.pop_back();
        }
    }
    T top(){
        return v[v.size()-1];
    }
};
int main(){
    Stack<int> s;
    Stack<string> s2;

    //insertion in Stack
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(6);
    s.push(10);

    //check stack is empty() or not
    if(s.empty()==1){
        cout<<"Stack1 is empty\n";
    }else cout<<"Stack1 is not empty\n";

    //print stack
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    cout<<"\nStack 2 Implementation\n";
    //insertion in Stack2
    s2.push("ab");
    s2.push("cd");
    s2.push("ef");
    s2.push("gh");
    s2.push("ij");
    s2.push("kl");

    //check stack is empty() or not
    if(s2.empty()==1){
        cout<<"\nStack2 is empty\n";
    }else cout<<"Stack2 is not empty\n";

    //print stack
    while(!s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }
    return 0;
}