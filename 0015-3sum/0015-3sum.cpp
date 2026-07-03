class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();

        sort(nums.begin(),nums.end());
        int i=0;
      vector<vector<int>> temp;
        for(i=0;i<n-2;i++){
        if(i>0 && nums[i]==nums[i-1])
        continue;
        int j=i+1;
        int k=n-1;
            int sum=(-1*nums[i]);
            while(j<k){
                int s =nums[j]+nums[k];
                if(sum==s){
                    temp.push_back({nums[i],nums[j],nums[k]});
                    
                    j++;
                    k--;
                    
                    while(j<0 && nums[j]==nums[j-1]){
                        j++;
                    }
                    while(k>0 &&  nums[k]==nums[k+1]){
                        k--;
                    }
                }
                else if(sum<s){
                    k--;

                }
                else{
                    j++;
                }
            }
        }

        
      return temp;
    }
};