class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n=arr.size();
        int onedel=INT_MIN;
        int nodel=arr[0];
        int res=arr[0];
        for(int i=1;i<n;i++){
            int pre=nodel;
            nodel=max(arr[i],(arr[i]+nodel));
            
            if(onedel==INT_MIN)
            onedel=0;
            onedel=max((arr[i]+onedel),pre);
            res=max(res,max(nodel,onedel));
        }
        return res;
    }
};