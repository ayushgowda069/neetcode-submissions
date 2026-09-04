class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        int max_count=1, count=1;
        int l=0,r=1;
        sort(nums.begin(),nums.end());
        while(r<nums.size()){
            if(nums[r]-nums[r-1]==1) count++;
           else if(nums[r]==nums[r-1]){
            r++;
continue;

           } 
            else{
                count=1;
            }
            r++;
            max_count=max(max_count,count);
        }
        return max_count;
    }
};
