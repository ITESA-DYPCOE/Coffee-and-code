class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        
        List<List<Integer>> ans= new ArrayList<List<Integer>>();
    
        Arrays.sort(nums);
        
        for(int i=0; i<nums.length-2; i++) {
            for(int j=i+1; j<nums.length; j++) {
                
                int target= -nums[i]-nums[j];
                
                int l= j+1;
                int r= nums.length-1;
                
                while(l<=r) {
                    int mid= l+(r-l)/2;
                    if(nums[mid]==target) {
                        ArrayList<Integer> a= new ArrayList<>();
                        a.add(nums[i]);
                        a.add(nums[j]);
                        a.add(target);
                        if(!(ans.contains(a))) ans.add(a);
                        break;
                    }
                    if(nums[mid]<target) l= mid+1;
                    else r= mid-1;
                }
            }
        }
        
        return ans;
    }
}
