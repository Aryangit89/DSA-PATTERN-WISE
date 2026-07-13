class Solution {
public:
    int maxProduct(vector<int>& nums) {
     int n=nums.size();
     int maxpro=nums[0];
     int minpro=nums[0];
     int maxiipro=nums[0];
     for(int i=1;i<n;i++){
        int v1=nums[i];
        int v2=nums[i]*maxpro;
        int v3=nums[i]*minpro;
        
        maxpro=max(v1,max(v2,v3));
        minpro=min(v1,min(v2,v3));
        maxiipro=max(maxiipro,max(maxpro,minpro));
     }   
     return maxiipro;
    }
};