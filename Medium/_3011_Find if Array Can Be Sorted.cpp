//https://leetcode.com/problems/find-if-array-can-be-sorted/description/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int n=nums.size();

        bool swaping=true;
        for(int i=0; i<n; i++){
            swaping=false;
            for(int j=0; j<n-i-1; j++){
                if(nums[j]<=nums[j+1]){
                    continue;
                }else{
                    if(__builtin_popcount(nums[j])==__builtin_popcount(nums[j+1])){
                        swap(nums[j], nums[j+1]);
                        swaping=true;
                    }else{
                        return false;
                    }
                }
                if(swaping==false){
                    break;
                }
            }
        }
        return true;
    }
};