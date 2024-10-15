//https://leetcode.com/problems/running-sum-of-1d-array/description/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;
        res.push_back(nums[0]);
        for(int i=1; i<n; i++){
            int val=res[i-1]+nums[i];
            res.push_back(val);
        }
        return res;
    }
};