/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-15 || 12:43:40
 * * * * File    : _46_Permutations.cpp
*/


// https://leetcode.com/problems/permutations/


#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(vector<int> &nums, vector<int> &a, vector<vector<int>> &ans, int fre[]){
    if(nums.size()==a.size()){
        ans.push_back(a);
        return;
    }
    for(int i=0; i<nums.size(); i++){
        if(fre[i]==0){
            a.push_back(nums[i]);
            fre[i]=1;
            solve(nums, a, ans, fre);
            fre[i]=0;
            a.pop_back();
        }

    }
}

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        vector<int> a;
        int fre[n];

        for(int i=0; i<n; i++){
            fre[i]=0;
        }

        solve(nums, a, ans, fre);
        return ans;
    }
};