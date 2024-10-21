// TODO: https://leetcode.com/problems/find-pivot-index/


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int left_sum = 0;
        int right_sum = 0;

        for(int i=0; i<n; i++){
            right_sum += nums[i];
        }
        for(int i=0; i<n; i++){
            right_sum -=nums[i];
            if(right_sum == left_sum) return i;
            left_sum += nums[i];
        }
        return -1;

    }
};



// Better Approach(S.C->O(1))
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int sum=0; 
        for(int &x:nums){
            sum+=x;
        }
        int cs=0;
        for(int i=0; i<n; i++){
            int ls=cs;
            int rs=sum-ls-nums[i];
            if(ls==rs) return i;
            cs+=nums[i];
        }
        return -1;
    }
};