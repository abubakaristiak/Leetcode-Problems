/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-23 || 13:16:44
 * * * * File    : _2570_Merge Two 2D Arrays by Summing Values.cpp
 */


// https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/description/


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
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int, int> mp;
        for(auto &val:nums1){
            mp[val[0]]+=val[1];
        }
        for(auto &val:nums2){
            mp[val[0]]+=val[1];
        }
        vector<vector<int>> v;
        for(auto &val:mp){
            v.push_back({val.first, val.second});
        }
        sort(v.begin(), v.end());
        return v;
    }
};