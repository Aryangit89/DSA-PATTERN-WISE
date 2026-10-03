class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int zc=0;
        int oc=0;
        int res=0;
        unordered_map<int,int>f;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zc++;
            }
            else{
                oc++;
            }
            int diff=zc-oc;
            if(diff==0){
                res=max(res,i+1);
                continue;
            }
            if(f.find(diff)==f.end()){
                f[diff]=i;
            }
            else{
                int idx=f[diff];
                int len=i-idx;
                res=max(len,res);
            }
        }
        return res;

    }
};