#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &s,int x){
    //base case
    if(s.empty()){
        s.push(x);
        return;
    }
     int data =s.top();
     s.pop();
     insertAtBottom(s,x);
     s.push(data);
}
void reverseStack(stack<int> &s){
    //base case
    if(s.empty()){
        return;
    }
    //otherwise
    //pop out top element and insert it at bottom of reverse smaller stack
    int x=s.top();
    s.pop();
    //recursively reverse the smaller stack
    reverseStack(s);
    insertAtBottom(s,x);
}
int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    reverseStack(s);
    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
} 