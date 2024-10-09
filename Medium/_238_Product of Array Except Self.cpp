//https://leetcode.com/problems/product-of-array-except-self/?envType=study-plan-v2&envId=leetcode-75

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();

        int zeros_count=0;
        int product_without_zero=1;

        for(int &num:nums){
            if(num==0) zeros_count++;
            else product_without_zero*=num;
        } 

        vector<int> result(n);
        for(int i=0; i<n; i++){
            int num = nums[i];
            if(num!=0){
                if(zeros_count>0) result[i]=0;
                else result[i] = product_without_zero/nums[i];
            }else{
                if(zeros_count>1) result[i]=0;
                else result[i]=product_without_zero;
            }
        }
        return result;
    }
};


// Different approach
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n);
        vector<int> right(n);
        left[0] = 1;
        right[n-1] = 1;
        
        for(int i = 1; i<nums.size(); i++) {
            left[i] = left[i-1]*nums[i-1];
        }
        
        for(int i = n-2; i>=0; i--) {
            right[i] = right[i+1]*nums[i+1];
        }
        
        vector<int> result(n);
        for(int i = 0; i<n; i++) {
            result[i] = left[i]*right[i];
        }
        
        return result;
    }
};