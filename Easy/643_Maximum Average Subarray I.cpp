//https://leetcode.com/problems/maximum-average-subarray-i/description/?envType=study-plan-v2&envId=leetcode-75

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg=0.0;
        double ans=0.0;
        int sum=0;
        for(int i=0; i<k; i++){
            sum+=nums[i];
        }
        avg=sum*1.0/k;
        ans=avg;
        for(int i=k; i<nums.size(); i++){
            sum+=nums[i]-nums[i-k];
            avg=sum*1.0/k;
            ans=max(ans, avg);
        }
        return ans;
    }
};