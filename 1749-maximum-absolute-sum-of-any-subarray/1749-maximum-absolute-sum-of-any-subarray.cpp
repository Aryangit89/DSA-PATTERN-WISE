class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
     int n=nums.size();
     int maxend=nums[0];
     int minend=nums[0];
     int res=abs(nums[0]);
     for(int i=1;i<n;i++){
        int v1=nums[i];
        int v2=nums[i]+maxend;
        int v3=nums[i]+minend;
       
       maxend=max(v1,max(v2,v3));
       minend=min(v1,min(v2,v3));
        res=max(res,max(abs(maxend),abs(minend)));
     }   
     return res;
    }
};