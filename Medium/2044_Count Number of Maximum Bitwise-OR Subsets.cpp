//https://leetcode.com/problems/count-number-of-maximum-bitwise-or-subsets/description/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int cntSubsets(int idx, int curOR, vector<int>& nums, int mxOR){
        if(idx == nums.size()){
            if(curOR==mxOR) return 1;
            return 0;
        }
        int nibo = cntSubsets(idx+1, curOR | nums[idx], nums, mxOR);
        int nibo_na = cntSubsets(idx+1, curOR, nums, mxOR);
        return nibo+nibo_na;
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int mxOR=0;
        for(int &num : nums){
            mxOR |= num;
        }
        int curOR=0;
        return cntSubsets(0,curOR,nums,mxOR);

    }
};