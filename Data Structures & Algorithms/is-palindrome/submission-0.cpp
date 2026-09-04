class Solution {
public:
    bool isPalindrome(string s) {
        string x="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                x+=tolower(s[i]);
            }
        }
       int l=0;
       int r=x.size()-1;
        while(l<r){
            if(x[l]==x[r]) {
                l++;
                r--;
            }else 
            return false;
        }
        return true;
    }
};
