class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int low=0;
        int high=n-1;
        int area=0;
        int dis=0;
        int h=0;
        int currarea=0;
        while(low<high){
            dis=high-low;
            h=min(height[low],height[high]);
            currarea=dis*h;
            area=max(area,currarea);
            if(height[low]<height[high]){
                low++;
            }
            else{
                high--;
            }
        }
        return area;
    }
};