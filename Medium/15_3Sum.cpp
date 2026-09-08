/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-05-01 || 19:18:05
 * * * * File    : 15_3Sum.cpp
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
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        asort(nums);
        set<vector<int>> st;
        for(int i=0; i<n-2; i++){
            int l=i+1, r=n-1;
            while (l<r)
            {
                int sum=nums[i]+nums[l]+nums[r];
                if(sum==0){
                    st.insert({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                }else if(sum<0){
                    l++;
                }else{
                    r--;
                }
            }
        }
        vector<vector<int>> res(st.begin(), st.end());
        return res;
    }
};
