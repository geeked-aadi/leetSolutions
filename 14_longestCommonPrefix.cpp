class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string x="";
        int minL = INT_MAX;
        for(const auto &s : strs)
        minL=min(minL,(int)s.size());
        if(minL ==0) return "";
        for(int i=0;i<minL;i++){
            char c =strs[0][i];
            for(int j=1;j<(int)strs.size();j++){
                if(strs[j][i] != c){
                    return strs[0].substr(0,i);
                }
            }
        }
            return strs[0].substr(0,minL);
    }
};