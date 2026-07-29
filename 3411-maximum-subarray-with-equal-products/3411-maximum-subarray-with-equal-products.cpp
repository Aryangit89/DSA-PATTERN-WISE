class Solution {
public:
   
    int maxLength(vector<int>& nums) {
       int n=nums.size();
        int res=INT_MIN;
       for(int i=0;i<n;i++){
        long long pro=nums[i];
        int ans=nums[i];
       int ans1=nums[i];
        for(int j=i+1;j<n;j++){
        
        if(pro>LLONG_MAX/nums[j]){
            break;
        }
            pro=pro*nums[j];
            ans= gcd(ans,nums[j]);
            ans1=  lcm(ans1,nums[j]);
            if(pro==1LL*ans*ans1){
                res=max(res,j-i+1);
            }

        }
       } 
       return res;
    }
};