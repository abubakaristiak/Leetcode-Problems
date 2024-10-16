//https://leetcode.com/problems/search-insert-position/description/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int l=0;
        int r=nums.size();
        int mid;
        if(t>nums[r-1]) return r;
        while(l<=r){
            mid=(l+r)/2;
            if(nums[mid]==t) return mid;
            if(t<nums[mid]) r=mid-1;
            else l=mid+1;
        }
        return l;
    }
};