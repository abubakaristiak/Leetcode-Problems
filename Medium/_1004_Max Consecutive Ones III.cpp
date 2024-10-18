//https://leetcode.com/problems/max-consecutive-ones-iii/description/?envType=study-plan-v2&envId=leetcode-75

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0, j=0;
        int n=nums.size();
        int zeroCount=0, ans=INT_MIN;
        while(j<n){
            if(nums[j]==0){
                zeroCount++;
            }
            while(zeroCount>k){
                if(nums[i]==0){
                    zeroCount--;
                }
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};