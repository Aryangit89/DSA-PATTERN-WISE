class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int res=0;
        int count=0;
        for(int high=0;high<n;high++){
        if(nums[high]==0){
            count++;
        }
        
        if(count>0){
                
                
                low=high+1;
                count--;
            }
        
        res=max(res,high-low+1);
        }
        return res;
    }
};