//TODO: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
/*
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int largest = nums[n-1];  
        int secondLargest = nums[n-2];  
        return(largest-1) * (secondLargest-1);
    }
};
*/