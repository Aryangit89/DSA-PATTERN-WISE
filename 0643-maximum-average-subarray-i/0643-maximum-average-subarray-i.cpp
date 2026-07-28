class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
     int n=nums.size();
     int low=0;
     int high=0;
     double sum=0;
     double avg=0;
     int c=0;
     double res=INT_MIN;
     for(high=0;high<n;high++){
        sum+=nums[high];
        c++;
        while(c>k){
           
            sum=sum-nums[low];
            low++;
            c--;
        }
        if(c==k){
             avg=sum/k;
             res=max(res,avg);
        }
     }   
     return res;
    }
};