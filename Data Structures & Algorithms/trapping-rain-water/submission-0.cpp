class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()<3) return 0;

        int left=0;
        int right=height.size()-1;
        int l_max=INT_MIN;
        int r_max=INT_MIN;
        int total_water=0;
        while(left < right){
            if(height[left]<=height[right]){
                if(height[left]>l_max){
                    l_max=height[left];
                }else{
            total_water+=l_max-height[left];
                }
                left++;
            }else{
                if(height[right]>r_max){
                    r_max=height[right];
                }else{
            total_water+=r_max-height[right];
                }
                right--;
            

            }
        }
        return total_water;
    }
};
