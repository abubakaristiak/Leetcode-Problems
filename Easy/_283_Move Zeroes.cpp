//TODO: https://leetcode.com/problems/move-zeroes/
/*
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> ar(n,0);

        int j=0;
        for(int i=0; i<n; i++){
            if(nums[i] != 0){
                ar[j] =  nums[i];
                j++;
            }
        }
        for(int i=0; i<n;  i++){
            nums[i] = ar[i];
        }
    }
};
*/