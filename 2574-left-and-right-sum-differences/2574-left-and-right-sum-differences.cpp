class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n);
        vector<int>suffix(n);
        vector<int>ans;
        int i=1;
        
        prefix[0]=0;
        while(i<n){
            prefix[i]=prefix[i-1]+nums[i-1];
            i++;
        }
        suffix[n-1]=0;
        int j=n-2;
        while(j>=0){
            suffix[j]=nums[j+1]+suffix[j+1];
            j--;
        }
        for(int i=0;i<n;i++){
            ans.push_back(abs(prefix[i]-suffix[i]));
        }
        return ans;
    }
};