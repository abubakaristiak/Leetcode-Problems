//https://leetcode.com/problems/maximum-width-ramp/?envType=daily-question&envId=2024-10-10

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n=nums.size();
        int max_w=0;
        stack<int>s;
        for(int i=0; i<n; i++){
            if(s.empty() || nums[s.top()]>nums[i]){
                s.push(i);
            }
        }
        for(int i=n-1; i>=0; i--){
            while(!s.empty() && nums[s.top()]<=nums[i]){
                max_w=max(max_w, i-s.top());
                s.pop();
            }
        }
        return max_w;
    }
};