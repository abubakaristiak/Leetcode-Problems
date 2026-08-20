//https://leetcode.com/problems/monotonic-array/description/?envType=study-plan-v2&envId=programming-skills

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        bool incre=false;
        bool decre=false;
        for(int i=0; i<n-1; i++){
            if(nums[i] < nums[i+1]){
                incre=true;
            }
            if(nums[i] > nums[i+1]){
                decre=true;
            }
        }
        if(incre==true && decre==true){
            return false;
        }
        return true;
    }
};