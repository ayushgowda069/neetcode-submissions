class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_map<int,int> mp;
       for(auto &x:nums){
        mp[x]++;
       } 
       for(auto &x:mp){
        if(x.second>1){
            return true;
        }//can be used with set also 
       }
       return false;
    }
};//find(),count(),size(),begin(),end(),empty()