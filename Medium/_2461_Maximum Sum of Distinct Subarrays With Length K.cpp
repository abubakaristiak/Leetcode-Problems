/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-19 || 10:17:49
 * * * * File    : _2461_Maximum Sum of Distinct Subarrays With Length K.cpp
 */


// https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/description/


#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0, j=0;
        long long res=0;
        long long curSum=0;
        unordered_set<int> st;

        while(j<n){
            while(st.count(nums[j])){
                curSum-=nums[i];
                st.erase(nums[i]);
                i++;
            }
            curSum+=nums[j];
            st.insert(nums[j]);
            if(j-i+1==k){
                res=max(res,curSum);
                curSum-=nums[i];
                st.erase(nums[i]);
                i++;
            }
            j++;
        }
        return res;
    }
};