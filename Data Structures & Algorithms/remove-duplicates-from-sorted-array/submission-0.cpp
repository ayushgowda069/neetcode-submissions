class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        for(auto x:s){
            cout<<x<<" ";
        }cout<<endl;
        nums.clear();
        nums.insert(nums.begin(),s.begin(),s.end());
        return s.size();

    }
};