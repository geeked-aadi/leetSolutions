/*
The intuition behind this approach is that if an element occurs more than n/2 
times in the array (where n is the size of the array), it will always occupy
 the middle position when the array is sorted. Therefore, 
we can sort the array and return the element at index n/2.*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};
/*
The intuition behind using a hash map is to count the occurrences of each element 
in the array and then identify the element that occurs more than n/2 times.
 By storing the counts in a hash map, we can efficiently keep track of the occurrences 
 of each element.
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> ht;
        int maxx=0;
        int res=0;
        for(int i : nums){
            ht[i]+=1;
            if(ht[i]>(nums.size()/2)){
                return i;
            }
        }
        return res;
        
    }
};