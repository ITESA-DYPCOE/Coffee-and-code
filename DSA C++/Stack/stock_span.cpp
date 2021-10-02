#include<iostream>
#include<vector>
#include<stack>
using namespace std;  
void stockSpan(int prices[],int n,int span[]){

    stack<int> s;//indices of the days
    s.push(0);
    span[0]=1;

    //loop for rest of the days
    for(int i=1;i<=n;i++){
        int currentPrice=prices[i];
        while(!s.empty() && prices[s.top()]<=currentPrice){
            s.pop();
        }
        if(!s.empty()){
            int prev_highest_index=s.top();
            span[i]=i-prev_highest_index;
        }
        else{
            span[i]=i+1; 
        }
        s.push(i);
    }
}
int main(){
    int prices[]={100,80,60,75,60,55,625};
    int n=sizeof(prices)/sizeof(int);
    int span[100000]={0};
    stockSpan(prices,n,span);
    for(int i=0;i<n;i++){
        cout<<span[i]<<" ";
    }
    return 0;
}