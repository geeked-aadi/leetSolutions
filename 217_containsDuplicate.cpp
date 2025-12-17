//using maps timeComplexity O(n)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> countMap;
       int  count=0;
        for (int i : nums){
            countMap[i]++;
            if (countMap[i]>1){
                return true;
            }

        }
            return false;

        
    }
};
//using set timeComplexity O(1)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int x : nums) {
            if (seen.count(x)) {
                return true;   // duplicate found
            }
            seen.insert(x);
        }
        return false;
    }
};
