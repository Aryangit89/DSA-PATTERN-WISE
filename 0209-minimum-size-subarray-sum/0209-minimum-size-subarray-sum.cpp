class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=0;
        int sum=0;
        int res=INT_MAX;
        int len=0;
        while(high<n){
        sum=sum+nums[high];
        while(sum>=target){
             len=high-low+1;
            res=min(res,len);
            sum=sum-nums[low];
            low++;
        }
        high++;
        }
        if(len==0){
            return 0;
        }
        return res;
    }
};