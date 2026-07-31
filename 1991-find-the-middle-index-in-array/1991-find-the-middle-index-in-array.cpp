class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=0;
        int sum=0;
        for(auto x:nums)
        sum=sum+x;
        int i=0;
        right=sum-nums[i]-left;
        if(right==left)
        return i;
        for(int i=1;i<n;i++){
            left=left+nums[i-1];
            right=sum-nums[i]-left;
            if(right==left)
            return i;
        }
        return -1;
    }
};