//https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/description/?envType=study-plan-v2&envId=leetcode-75
//Brute Force solution (Output: TLE)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int n;
    int findMax(vector<int>& nums, int skip_idx){
        int curlen=0;
        int maxlen=0;
        for(int i=0; i<n; i++){
            if(i==skip_idx) continue;
            if(nums[i]==1){
                curlen++;
                maxlen = max(maxlen, curlen);
            }
            else curlen=0;
        }
        return maxlen;
    }
    int longestSubarray(vector<int>& nums) {
        n=nums.size();
        int res=0;
        int cntZero=0;
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                cntZero++;
                res = max(res, findMax(nums,i));
            }
        }
        if(cntZero==0) return n-1;
        return res;
    }
};



// Another Approach using Sliding Window
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int cntZero=0;
        int maxlen=0;
        int i=0;
        for(int j=0; j<n; j++){
            if(nums[j]==0) cntZero++;
            while(cntZero>1){
                if(nums[i]==0) cntZero--;
                i++;
            }
            maxlen = max(maxlen, j-i);
        }
        return maxlen;
    }
};




// Better sliding window approach...
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0;
        int j=0;
        int last_zero_idx= -1;
        int res=0;
        while(j<nums.size()){
            if(nums[j]==0){
                i=last_zero_idx+1;
                last_zero_idx=j;
            }
            res=max(res, j-i);
            j++;
        }
        return res;
    }
};