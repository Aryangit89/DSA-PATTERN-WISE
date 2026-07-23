class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n=name.size();
        int m=name.size();
           int i=0;
           int j=i;
           int count=0;
        while(i<n){
             
             if(name[i]==typed[j] &&name[i]==name[i+1]){
                i++;
                j++;
             }

            if(name[i]==typed[j] && name[i]!=name[i+1]){
                j++;
                count=0;
            }
            if(name[i]!=typed[j] && i<=j){
                i++;
                count++;
                if(count>1)
                return false;
            }
            if(i>j){
                return false;
            }
            if(name[i]!=typed[j]){
                return false;
            }
           
        }
        return true;
    }
};