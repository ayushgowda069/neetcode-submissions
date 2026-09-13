class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for (auto &s:strs){
            string x=s;
            sort(s.begin(),s.end());
            mp[s].push_back({x});
        }
        vector<vector<string>> xx;
 for(auto &x:mp){
    xx.push_back(x.second);
 }
      return xx;
    }
};
