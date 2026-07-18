class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        int res=0;
        unordered_map<int,int>mp;
         mp[0]=1;
        for(int i=0;i<n;i++){
           
            sum=sum+nums[i];
            int q=sum-k;
            int f=mp[q];
            res=res+f;
            mp[sum]++;
        }
       
        return res;
    }
};