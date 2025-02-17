/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-17 || 12:01:20
 * * * * File    : _90_Subsets II.cpp
*/



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


class Solution {
public:
    vector<vector<int>> res;
    void solve(int i, vector<int> &nums, vector<int> &tmp){
        res.push_back(tmp);
        for(int j=i; j<nums.size(); j++){
            if(j>i && nums[j]==nums[j-1]){
                continue;
            }
            tmp.push_back(nums[j]);
            solve(j+1, nums, tmp);
            tmp.pop_back();
        }
    }


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        asort(nums);
        vector<int> tmp;

        solve(0, nums, tmp);
        return res;
    }
};


