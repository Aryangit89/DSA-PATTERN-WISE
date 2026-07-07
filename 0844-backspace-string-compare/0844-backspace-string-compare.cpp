class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n=s.length();
        int m=t.length();
       string p;
       string q;
       for(int i=0;i<n;i++){
        if(s[i]=='#' && !p.empty()){
            
            p.pop_back();
        }
        else{
            if(s[i]!='#')
            p.push_back(s[i]);
        }
       }
        for(int i=0;i<m;i++){
        if(t[i]=='#' && !q.empty()){
            
            q.pop_back();
        }
        else{
            if(t[i]!='#')
            q.push_back(t[i]);
        }
       }
       if(p==q){
       return true;
       }
       else{
       return false;
       }
    }
};