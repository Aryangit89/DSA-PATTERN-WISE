class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int left=0;
        int right=0;
        for(auto x:nums)
            sum+=x;
            int i=0;
        right=sum-nums[i]-left;
        if(right==left)
        return i;
        for(int i=1;i<n;i++){
           left+=nums[i-1];
           right=sum-nums[i]-left;
           if(left==right)
           return i;
        }
        return -1;
    }
};