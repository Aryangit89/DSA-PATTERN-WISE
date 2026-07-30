class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int n=arr.size();
        long long ans=0;

        const int MOD = 1e9 + 7;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto p1:mp){
            int x=p1.first;
        
        for(auto p2:mp){
            int y=p2.first;

            int z=target-x-y;
            if(!mp.count(z))
            continue;

            if(x<=y && y<=z){
                 
                 if(x==y && y==z){
                    ans+=1LL*mp[x]*(mp[x]-1)*(mp[x]-2)/6;
                 }
                 else if(x==y && y!=z){
                 ans+=1LL*mp[x]*(mp[x]-1)/2*mp[z];
                 }
                 else if(x!=y && y==z ){
                   ans+=1LL*mp[x]*mp[y]*(mp[y]-1)/2;
                 }
                 else{
        ans+=1LL*mp[x]*mp[y]*mp[z];
                 }
                 ans%=MOD;
            }
        }
        }
        return (int) ans;
    }
};