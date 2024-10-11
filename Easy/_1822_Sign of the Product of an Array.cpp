//https://leetcode.com/problems/sign-of-the-product-of-an-array/description/?envType=study-plan-v2&envId=programming-skills

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int signFunc(int x){
        if(x>0) return 1;
        else if(x<0) return -1;
        else return 0;

    }
    int arraySign(vector<int>& nums) {
        int n=nums.size();
        int mul=1;
        for(int i=0; i<n; i++){
            if(nums[i]<0) nums[i]=-1;
            else if(nums[i]>0) nums[i]=1;
            else return 0;
        }
        for(int i=0; i<n;i++){
            mul*=nums[i];
        }
        int ans = signFunc(mul);
        return ans;
    }
};