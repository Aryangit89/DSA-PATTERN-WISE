class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n=name.size();
        
           int i=0;
           int j=i;  
        while(i<=n){
             
             if(i<=n &&name[i]==typed[j]){
                i++;
                j++;
             }

             else if(j>0 && typed[j]==typed[j-1]){
                j++;
             }
             else{
                return false;
             }

         }
         return true;


    }
};