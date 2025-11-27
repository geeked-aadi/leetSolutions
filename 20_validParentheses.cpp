class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char>  mp ={
            {')','('},{']','['},{'}','{'}
        };
        vector<char> S;
        for(char c: s){
            if(c=='('|| c=='{'||c=='['){
                S.push_back(c);
            }else if(S.empty()||S.back()!=mp[c]){
                    return false;
                }
            else{
                S.pop_back();
            }
        }
        return S.empty();
    }
};