//https://leetcode.com/problems/max-number-of-k-sum-pairs/description/?envType=study-plan-v2&envId=leetcode-75

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int i=0, j=n-1;
        int cnt=0;

        while(i<j){
            if(nums[i]+nums[j]==k){
                cnt++;
                i++;
                j--;
            }
            else if(nums[i]+nums[j]<k) i++;
            else if(nums[i]+nums[j]>k) j--;
        }
        return cnt;
    }
};