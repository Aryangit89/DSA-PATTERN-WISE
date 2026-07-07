class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=0;
        int res=INT_MAX;
        int c=1;
        vector<int>v=nums;
        int m=0;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(nums[i]!=v[i]){
                m++;
                if(c==1){
                low=i;
                c--;
                }
                else
                high=i;
                
            }
          
        } res=min(res,high-low+1); 
        if(m==0){
            return 0;
        }
        else
        return res;
    }
};