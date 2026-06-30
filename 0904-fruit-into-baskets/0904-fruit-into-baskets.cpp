class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> mp;
        int n=fruits.size();
        int low=0;
        int high=0;
        int len=0;
        int res=INT_MIN;
        while(high<n){
            mp[fruits[high]]++;
            len=high-low+1;
            while(mp.size()>2){
              
                mp[fruits[low]]--;
                
                if(mp[fruits[low]]==0){
                mp.erase(fruits[low]);
                len--;
                }
                low++;                 
            }
              res=max(res,len);
            high++;
        }
        return res;
    }
};