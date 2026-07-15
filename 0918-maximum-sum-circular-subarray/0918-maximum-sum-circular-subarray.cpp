class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int maxend=nums[0];
        int minend=nums[0];
        int count=1;
        int maxi=INT_MIN;
        int res1=nums[0];
        int res2=nums[0];
        int total=nums[0];
        int res=0;
            for(int i=1;i<n;i++){
            if(nums[i]<0)
            count++;
            // total sum
            total=total+nums[i];

            //normal kadane
            maxend=max(nums[i],nums[i]+maxend);
            res1=max(res1,maxend);
            // minimum sum
            minend=min(nums[i],nums[i]+minend);
            res2=min(res2,minend);
            
        }
        res=total-res2;










        
        if(count==n){
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
        }
        return maxi;
        }
        return max(res,res1);
    }
};