class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n=nums.size();
        int res=0;
        

        for(int i=0;i<n;i++){
           
            if(nums[i]%2==0 && nums[i]<=threshold){
                 int cr=1;
                for(int j=i+1;j<n;j++){
                    if(nums[j]%2==nums[j-1]%2 )
                    break;
                    
                    if( nums[j]>threshold){
                        break;
                    }
                   cr++ ;
                }
            
            res=max(res,cr);
            }
        }
        return res;
    }
};