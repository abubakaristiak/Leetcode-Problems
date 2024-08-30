// TODO: https://leetcode.com/problems/left-and-right-sum-differences/
/*
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftSum(n);
        vector<int> rightSum(n);
        vector<int> diffSum(n);
        leftSum[0] = rightSum[n-1] = 0;

        for(int i=1; i<n; i++){
            leftSum[i] = leftSum[i-1]+nums[i-1];
        }
        for(int i=n-2; i>=0; i--){
            rightSum[i] = rightSum[i+1]+nums[i+1];
        }
        for(int i=0; i<n; i++){
            diffSum[i] = abs(leftSum[i]-rightSum[i]);
        }
        return diffSum;
        
    }
};
*/