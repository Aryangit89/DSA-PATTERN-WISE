class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int res=0;
        int count=0;
        for(int high=0;high<n;high++){
             
        if(nums[high]==1)
            count++;
        
        
        else if(nums[high]==0)
            count=0;
        res=max(res,count);
        }
        return res;
    }
};