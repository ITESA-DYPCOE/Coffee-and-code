// Leetcode 15. 3Sum solution 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        vector<vector<int>> ans;
        sort(a.begin(),a.end());
        int n = a.size();
        for(int i=0;i<n;i++)
        {
            if(i>0&&a[i]==a[i-1])
            {
                continue;
            }
            int low = i+1;
            int high = n-1;
            while(low<high)
            {
                int sum = a[i] + a[low] + a[high];
                if(sum==0)
                {
                    ans.push_back({a[i],a[low],a[high]});
                    while(low+1<n && a[low]==a[low+1])
                    {
                        low++;
                    }
                    while(high-1>low && a[high-1]==a[high])
                    {
                        high--;
                    }
                    low++;
                    high--;
                }
                else if(sum<0)
                {
                    low++;
                }
                else
                {
                    high--;
                }
            }
        }
        return ans;
    }
};
