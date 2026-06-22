class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int k=1;
        int low=1;
        int high=1;
        while(high<n){
            if(nums[high]==nums[high-1]){
                high++;
                continue;
            }
            
            nums[low]=nums[high];
            k++;
            low++;
            high++;
        
    }
        return k;
    }
};