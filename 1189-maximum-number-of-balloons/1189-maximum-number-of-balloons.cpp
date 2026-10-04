class Solution {
    int fun( unordered_map<char,int>need,unordered_map<char,int>have){
      int count=INT_MAX;
      for(auto i:need){
        char key=i.first;
        int fneed=i.second;
        int fhave=have[key];
        count=min(count,(fhave/fneed));
      } 
      return count;
    }
public:
    int maxNumberOfBalloons(string text) {
        int n=text.size();
        unordered_map<char,int>need;
        unordered_map<char,int>have;
        string b="balloon";
        for(int i=0;i<b.size();i++){
            need[b[i]]++;
        }

        for(int i=0;i<n;i++){
            have[text[i]]++;
        }

        return fun(need,have);
    }
};