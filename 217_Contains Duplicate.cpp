/*
we could use a hash map to count the frequency of each element,
 but that would be less efficient than using a set to track seen elements. The
optimal Approach:
Use unordered_set to track seen elements.
If an element already exists in the set → duplicate found.

Why set?
We only need to check existence, not frequency.
Set stores unique elements.

Time Complexity:
O(n) average (each insert/find is O(1)).

Space Complexity:
O(n) in worst case (all elements unique).
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>ht;
        for(int i :nums){
            ht[i]++;
            if (ht[i]==2){
                return true;
            }
        }
        return false;
    }
};
class Solution{
    public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(),nums.end());
        return seen.size()!=nums.size();
    }
}