class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int low=0;
        int high=0;
        int pro=1;
        int res=0;
        while(high<n){
            pro=nums[high]*pro;
            
            while(pro>=k){
               
            
              pro=pro/nums[low];
              
            low++;    
            }
              res=res+(high-low+1);
           high++;
        }
        return res;
    }
};