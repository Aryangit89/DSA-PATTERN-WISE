class Solution {
public:
int gcd(int a,int b){
    while(a>0){
    int c=a;
    a=b%a;
    b=c;
    }
    return b;  
}
    int gcdOfOddEvenSums(int n) {
        int even=0;
        int odd=0;
     for(int i=1;i<2*n;i++){
        if(i%2==0){
          even=even+n;  
        }
        else{
            odd=odd+n;
        }
     }
     int res=gcd(even,odd);
     return res;
    }
};