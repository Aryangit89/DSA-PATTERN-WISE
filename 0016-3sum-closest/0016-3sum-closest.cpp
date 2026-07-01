class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int diff;
        int bdiff=INT_MAX;
        int bestsum;
        int sum;
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
          
            while(j<k){
             sum=nums[i]+nums[j]+nums[k];
              diff=abs(sum-target);
            if(sum==target){
                
                k--;
                j++;
                return sum;

            }
            else if(sum>target){
                k--;
            }
            else{
                j++;
            }
            
            if(diff<bdiff){
                bdiff=diff;
                bestsum=sum;
            }
            }
        }
        return bestsum;;
    }
};