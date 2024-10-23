//https://leetcode.com/problems/find-the-difference-of-two-arrays/description/?envType=study-plan-v2&envId=leetcode-75

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1,s2;
        for(int val:nums1){
            s1.insert(val);
        }
        for(int val:nums2){
            s2.insert(val);
        }
        vector<vector<int>> ans(2);
        for(auto x:s1){
            if(s2.count(x)==0) ans[0].push_back(x);
        }
        for(auto x:s2){
            if(s1.count(x)==0) ans[1].push_back(x);
        }
        return ans;

    }
};