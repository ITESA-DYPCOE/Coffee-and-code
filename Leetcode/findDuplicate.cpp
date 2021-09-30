#include <bits/stdc++.h>;


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]==nums[i])
            {
                return nums[i];
            }
        }
        return 1;
    }
};