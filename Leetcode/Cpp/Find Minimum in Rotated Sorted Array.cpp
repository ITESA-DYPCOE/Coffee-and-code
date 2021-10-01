class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int n = nums.size();
        int high = n - 1;
        int low = 0;
        while (low < high)
        {
            if (nums[low] < nums[high])
            {
                return nums[low];
            }
            int mid = (low + high) / 2;
            if (nums[mid] >= nums[low])
            {
                low = mid + 1;
            }
            else
            {
                high = mid;
            }
        }
        return nums[low];
    }
};