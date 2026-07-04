class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        unordered_map<char,int>mp;
        int currmp=1;
        int low=0;
        int high=0;
        int res=0;
        while(high<n){
            mp[s[high]]++;
        
        while(mp[s[high]]>1){
             mp[s[low]]--;
             if(mp[s[low]]==0){
                mp.erase(s[low]);
             }
            
            low++;
        }
        res=max(res,high-low+1);
        high++;
        }
        return res;
    }
};