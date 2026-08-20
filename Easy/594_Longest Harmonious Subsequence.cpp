/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-25 || 11:59:34
 * * * * File    : _594_Longest Harmonious Subsequence.cpp
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
    int findLHS(vector<int>& nums) {
        int res=0;
        map<int, int> mp;
        for(int val:nums){
            mp[val]++;
        }
        
        for(auto it:mp){
            if(mp.find(it.first-1)!=mp.end()){
                res=max(res, mp[it.first]+mp[it.first-1]);
            }
        }
        return res;
    }
};