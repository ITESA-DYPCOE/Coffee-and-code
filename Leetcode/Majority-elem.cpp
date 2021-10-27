// https://leetcode.com/problems/majority-element/
class Solution {
public:
    int majorityElement(vector<int>& arr) {
        
        int n = arr.size();
        int count = 1; int num = arr[0];
        for(int i = 1; i<n;i++){
            if(arr[i]==num){
                count++;
            }
            else{
                count--;
                if(count ==0)
                    {num = arr[i];count  = 1;}
            }
        }
        return num;
        
        
    }
};
