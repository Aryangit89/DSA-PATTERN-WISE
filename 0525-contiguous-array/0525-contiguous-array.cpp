class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int zc=0;
        int oc=0;
        int d=0;
        int res=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
            zc++;
            else
            oc++;
            d=(zc-oc);
            if(d==0){
                res=max(res,i+1);
            }
            if(mp.find(d)==mp.end()){
            mp[d]=i;
            }
            else{
                int idx=mp[d];
                int len=i-idx;
                res=max(len,res);
            }
        }
        return res;
    }
};