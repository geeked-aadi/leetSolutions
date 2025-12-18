class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> sMap;
        if (s.size()!=t.size()){return false;}
        for(int i=0;i<s.size();i++){
            sMap[t[i]]--;
            sMap[s[i]]++;
        }
        for (auto i: sMap){
            if (i.second != 0){
                return false;
            }
        }
        return true;
    }
};