class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int len=nums.size();
        vector<int>a;
        int sum=0;
        for(int i=0;i<len;i++){
        sum+=nums[i];
        a.push_back(sum);
        }
        return a;
    }
};