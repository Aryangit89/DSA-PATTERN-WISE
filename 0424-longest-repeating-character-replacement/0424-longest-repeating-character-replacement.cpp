class Solution {
public:
     int find(vector<int> &a){
        int maxi=-1;
        for(int i=0;i<256;i++)
            maxi=max(maxi,a[i]);
        return maxi;
     }
    int characterReplacement(string s, int k) {
        int n=s.length();
         vector<int>f(256,0);
        int low=0;
        int high=0;
        int res=INT_MIN;
        while(high<n){
           f[s[high]]++;
           int maxcnt=find(f);
           int len=high-low+1;
           int diff=len-maxcnt;
           while(diff>k){
            f[s[low]]--;
            low++;
            maxcnt=find(f);
            len=high-low+1;
            diff=len-maxcnt;
           }
           len=high-low+1;
           res=max(res,len);
           high++;
        }
        return res;

    }
};