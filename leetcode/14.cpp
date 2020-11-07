class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int i = 0;
        if(strs.size() == 1 ) return strs[0];
        if(strs.size() == 0) return "";
        while(1){
            char la;
            if(i < strs[0].size())
                la = strs[0][i];
            else
                return ans;
            for(int j = 1;j <  strs.size();j++){
                if(i < strs[j].size()){
                    if(strs[j][i] != la) return ans;
                }else{
                    return ans;
                }
            }
            ans += la;
            i++;
        }
        return ans;
    }
};