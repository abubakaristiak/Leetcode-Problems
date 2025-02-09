/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-09 || 16:54:38
 * * * * File    : _2364_Count Number of Bad Pairs.cpp
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
    long long countBadPairs(vector<int>& nums) {
        int n=nums.size();
        ll cnt=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(j-i!=nums[j]-nums[i]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};