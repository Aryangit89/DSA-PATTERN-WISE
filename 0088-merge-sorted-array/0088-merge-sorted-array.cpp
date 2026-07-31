class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n1=m+n;
        int k=m-1;
        int l=n-1;
        int h=n1-1;
        while(k>=0 &&l>=0){
            if(nums1[k]<nums2[l]){
                nums1[h]=nums2[l];
                h--;
                l--;
                
            }
            else{
            nums1[h]=nums1[k];
            h--;
            k--;
            
            
            }
        }
        while(l>=0){
            nums1[h]=nums2[l];
            h--;
            l--;
        }

        return;
    }
};