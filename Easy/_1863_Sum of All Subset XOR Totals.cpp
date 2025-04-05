/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-05 || 23:28:14
 * * * * File    : _1863_Sum of All Subset XOR Totals.cpp
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
    
        void solve(vector<int>& nums, int i, vector<int>& currSubset,vector<vector<int>>& subsets) {
            if (i == nums.size()) {
                subsets.push_back(currSubset);
                return;
            }
    
            currSubset.push_back(nums[i]);
            solve(nums, i + 1, currSubset, subsets);
            currSubset.pop_back();
            solve(nums, i + 1, currSubset, subsets);
        }
    
        int subsetXORSum(vector<int>& nums) {
            vector<vector<int>> subsets;
            vector<int> currSubset;
            solve(nums, 0, currSubset, subsets);
    
            int result = 0;
            for (auto& currSubset : subsets) {
                int Xor = 0;
                for (int num : currSubset) {
                    Xor ^= num;
                }
                result += Xor;
            }
            return result;
        }
    };