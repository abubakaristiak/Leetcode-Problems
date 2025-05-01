/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-05-01 || 12:36:48
 * * * * File    : a.cpp
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
    int minimumDifference(vector<int>& nums, int k) {
        if(k<=1 || nums.size()<=1){
            return 0;
        }
        asort(nums);
        int mnDif=INT_MAX;
        for(int i=0; i<=nums.size()-k; i++){
            int dif=nums[i+k-1]-nums[i];
            mnDif=min(mnDif, dif);
        }
        return mnDif;
    }
};