/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-16 || 14:51:49
 * * * * File    : _3264_Final Array State After K Multiplication Operations I.cpp
 */


// https://leetcode.com/problems/final-array-state-after-k-multiplication-operations-i/description/


#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--){
            int mn=INT_MAX;
            int idx=0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i]<mn){
                    mn=nums[i];
                    idx=i;
                }
            }
            nums[idx]*=multiplier;
        }
        return nums;
    }
};