#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int rem=0,numslen=nums.size();
        vector <bool> res(nums.size());
        for(int i=0;i<numslen;i++){
            rem=(rem*2+nums[i])%5;
            res[i]=(rem==0);
        }
        return res;

        
        
    }
};
int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution s;
    s.prefixesDivBy5(nums);  // input is given, nothing is checked or printed
    vector<bool> r = s.prefixesDivBy5(nums);

for (size_t i = 0; i < r.size(); i++) {
    if (r[i])
        cout << "true ";
    else
        cout << "false ";
}


    return 0;
}
