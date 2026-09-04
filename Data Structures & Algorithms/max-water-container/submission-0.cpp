class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_water=0;
        int l=0;
        int r=heights.size()-1;
        while(l<r){
            int rain_water=(min(heights[l],heights[r])*(r-l));
            if(rain_water>max_water) max_water=rain_water;
            if(heights[l]>heights[r]) r--;
            else l++;
        }
        return max_water;
    }
};
