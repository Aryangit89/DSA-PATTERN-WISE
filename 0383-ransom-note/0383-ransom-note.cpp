class Solution {

 bool fun(unordered_map<char,int>have,unordered_map<char,int>need){
            for(auto i:need){
                char key=i.first;
                int fneed=i.second;
                int fhave=have[key];
                if(fhave<fneed){
                    return false;
                }

            }
            return true;
 }


public:
    bool canConstruct(string ransomNote, string magazine) {
     int r=ransomNote.size();
     int m=magazine.size();
     unordered_map<char,int>need;
     unordered_map<char,int>have;
     for(int i=0;i<r;i++){
        need[ransomNote[i]]++;
     }  

     for(int i=0;i<m;i++){
        have[magazine[i]]++;
     }
     
    return fun(have,need);
    }
};